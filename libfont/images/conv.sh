#!/bin/sh

basedir=$(dirname $0)
~/gba/tools/convbmp.sh font/fontdata.bmp > $basedir/../source/fontdata.hpp
