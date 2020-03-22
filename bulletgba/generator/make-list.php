#!/usr/bin/env php 
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

class BulletGroup
{
  var $groupName;
  var $listBulletNames;
  var $listBulletFuncs;

  function BulletGroup($groupName) {
    $this->groupName = $groupName;
    $this->groupNameCode = str_replace('-', '_', $this->groupName);
    $this->listBulletNames = array();
    $this->listBulletFuncs = array();

    $this->getListNamesAndFuncs();
  }

  function getUniqID($filename) {
    $f = fopen($filename, 'r');
    $string = fgets($f);

    $uniqID = NULL;
    if (preg_match('/XXX uniqID XXX (.+) XXX/', $string, $matches)) {
      $uniqID = $matches[1];
    }

    fclose($f);
    return $uniqID;
  }

  function getListNamesAndFuncs() {
    foreach (glob("data/code/{$this->groupName}/*.cpp") as $filename) {
      $uniqid = $this->getUniqID($filename);
      if ($uniqid != NULL) {
        $this->listBulletNames[] = basename($filename, '.cpp');
        $this->listBulletFuncs[] = "genBulletFunc_${uniqid}";
      }
    }
  }

  function toCode() {
    foreach ($this->listBulletFuncs as $func) {
      print "BulletInfo *${func}(FixedPointNum, FixedPointNum); \n";
    }
    print "\n";

    print "const BulletGenerateFunc listBulletFuncs_{$this->groupNameCode}[] = { \n";
    foreach ($this->listBulletFuncs as $func) {
      print "$func, \n";
    }
    print "}; \n\n";

    print "const char * const listBulletNames_{$this->groupNameCode}[] = { \n";
    foreach ($this->listBulletNames as $name) {
      print "\" $name\", \n";
    }
    print "NULL}; \n\n";
  }
}


$listGroup = array();
foreach (glob('data/code/*') as $dirname) {
  $group = new BulletGroup(basename($dirname));
  if (count($group->listBulletNames) > 0) {
    if ($group->groupName != "__system") {
      $listGroup[] = $group;
    }
  }
}

// ------------------------------------------------------------
print "#ifndef BARRAGE_LIST_HPP\n";
print "#define BARRAGE_LIST_HPP\n";
print "#include \"bullet.hpp\"\n\n";

foreach ($listGroup as $group) {
  $group->toCode();
}

print "const char * const listBulletGroups[] = {\n";
foreach ($listGroup as $group) {
  $name = ucwords($group->groupName);
  print "\" {$name}\", \n";
}
print "NULL}; \n\n";

print "const BulletGenerateFunc * const listBulletGroupsFuncs[] = {\n";
foreach ($listGroup as $group) {
  print "listBulletFuncs_{$group->groupNameCode}, \n";
}
print "}; \n\n";

print "const char * const * const listBulletGroupsNames[] = {\n";
foreach ($listGroup as $group) {
  print "listBulletNames_{$group->groupNameCode}, \n";
}
print "}; \n\n";

print "#endif\n";


?>
