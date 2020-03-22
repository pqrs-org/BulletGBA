#!/usr/bin/env php
<?php //-*- Mode: php; indent-tabs-mode: nil; Coding: utf-8; -*-

require_once sprintf('%s/../php/libcommon.php', dirname(__FILE__));

$xmlfile = Common::getArg1();
$doc = new DOMDocument;
$doc->preserveWhiteSpace = false;
$doc->formatOutput = true;
$doc->load($xmlfile, LIBXML_NSCLEAN);

print $doc->saveXML();

?>
