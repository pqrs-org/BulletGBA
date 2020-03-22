#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/libcommon.php', dirname(__FILE__));

class Cleanup
{
  var $document;
  var $bulletmlNode;

  function Cleanup($doc) {
    $this->document = $doc;
    $this->bulletmlNode = Common::getBulletMLNode($this->document);
  }

  function doConv() {
    while ($this->cleanupTopLevelNode());
    while ($this->fixActionlessRepeat());
    while ($this->flattenAction());
    while ($this->fixParentlessBulletElement());
    while ($this->moveBulletInfo2Fire());
    $this->checkRepeatContainWait();
    $this->setUniqID();

    return $this->document;
  }

  function cleanupTopLevelNode() {
    foreach ($this->bulletmlNode->childNodes as $elem) {
      if ($elem->nodeName == 'action' &&
          preg_match('/^top/', $elem->getAttribute('label'))) {
        // remove last <wait> if exist.
        while ($elem->lastChild->nodeName == 'wait') {
          $elem->removeChild($elem->lastChild);
        }

        // put vanish for toplevel action.
        $elem->appendChild($this->document->createElement('vanish'));

        $newbullet = $this->document->createElement('bullet');
        $newbullet->appendChild($elem->cloneNode(true));
        $newfire = $this->document->createElement('topFire');
        $newfire->appendChild($newbullet);
        $this->bulletmlNode->replaceChild($newfire, $elem);
        return true;

      } else {
        if ($elem->nodeName != 'topFire') {
          $this->bulletmlNode->removeChild($elem);
          return true;
        }
      }
    }
    return false;
  }

  /**
   * if <repeat> has no <action> element, then push <action>.
   * example:
   *   <repeat>
   *     <times>...</times>
   *     <fire>...</fire>       ** this tag must be child of <action>
   *     <wait>...</wait>       ** this tag must be child of <action>
   *   </repeat>
   */
  function fixActionlessRepeat() {
    foreach ($this->document->getElementsByTagName('repeat') as $elem) {
      $newAction = $this->document->createElement('action');
      $invalidNodes = array();
      foreach ($elem->childNodes as $e) {
        switch ($e->nodeName) {
          case 'times':
          case 'action':
            // do nothing
            break;

          default:
            $newAction->appendChild($e->cloneNode(true));
            $invalidNodes[] = $e;
            break;
        }
      }
      if ($newAction->hasChildNodes()) {
        foreach($invalidNodes as $e) {
          $elem->removeChild($e);
        }
        $elem->appendChild($newAction);
        return true;
      }
    }
    return false;
  }

  function flattenAction() {
    foreach ($this->document->getElementsByTagName('action') as $elem) {
      $parentNode = $elem->parentNode;

      if ($parentNode->nodeName == 'action') {
        $childNodes = array();
        foreach ($elem->childNodes as $e) {
          $childNodes[] = $e->cloneNode(true);
        }
        foreach ($childNodes as $e) {
          $parentNode->insertBefore($e, $elem);
        }
        $parentNode->removeChild($elem);
        return true;
      }
    }
    return false;
  }

  /**
   * if <bullet>'s parent != <fire>, then push <fire>.
   */
  function fixParentlessBulletElement() {
    foreach ($this->document->getElementsByTagName('bullet') as $elem) {
      if ($elem->parentNode->nodeName != 'fire') {
        $fireElem = $this->document->createElement('fire');
        $fireElem->appendChild($elem->cloneNode(true));
        $elem->parentNode->replaceChild($fireElem, $elem);
        return true;
      }
    }
    return false;
  }

  /**
   * Make <speed> & <direction> tags in <bullet> To parent <fire>.
   *
   */
  function moveBulletInfo2Fire() {
    foreach ($this->document->getElementsByTagName('bullet') as $elem) {
      if (! $elem->hasChildNodes()) {
        continue;
      }
      foreach ($elem->childNodes as $e) {
        switch ($e->nodeName) {
          case 'speed':
          case 'direction':
            $elem->parentNode->insertBefore($e->cloneNode(true), $elem);
            $elem->removeChild($e);
            return true;
        }
      }
    }
    return false;
  }

  function checkRepeatContainWait() {
    foreach ($this->document->getElementsByTagName('repeat') as $elem) {
      if ($elem->getElementsByTagName('wait')->length == 0) {
        $elem->setAttribute('nowait', 'true');
      }
    }
  }

  function setUniqID() {
    $uniqID = md5($this->document->saveXML());
    $this->document->getElementsByTagName('bulletml')->item(0)->setAttribute('uniqID', $uniqID);
  }
}

if (realpath($argv[0]) == __FILE__) {
  $srcFile = Common::getSrcFile();
  $destFile = Common::getDestFile();

  $doc = new DOMDocument;
  $doc->preserveWhiteSpace = false;
  $doc->load($srcFile);

  $cleanup = new Cleanup($doc);
  $doc = $cleanup->doConv();

  $doc->save($destFile);
}

?>
