#!/bin/sh

basedir=$(dirname $0)

for f in */*.bmp; do ~/gba/tools/convbmp.sh $f > $basedir/../source/img/$(basename $f .bmp).cpp; done

allincFileName=$basedir/../source/img/allinc.cpp
rm -f $allincFileName
for f in */*.bmp; do echo "#include \"img/$(basename $f .bmp).cpp\"" >> $allincFileName; done
