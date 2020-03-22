<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

class Repeat
{
  var $times;
  var $listStepFuncCall;
  var $nowait;

  function Repeat($elem) {
    if ($elem->getAttribute('nowait') != NULL) {
      $this->nowait = true;
    } else {
      $this->nowait = false;
    }

    foreach ($elem->childNodes as $e) {
      switch ($e->nodeName) {
        case 'times':
          $timesValue = Common::getTopElementByName($elem, 'times')->nodeValue ;
          eval(sprintf('$this->times = intval(%s);', Common::dropSpecialChar($timesValue)));
          break;

        case 'stepfuncCall':
          $this->listStepFuncCall[] = $e;
          break;
      }
    }
  }
}

?>
