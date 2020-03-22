#!/bin/sh

targetromsize=$(expr 8 '*' 1024 '*' 1024)
targetromname=bulletgba.rom.gba
filename=bulletgba.gba
title="BulletGBA5"

gbafix $filename -t$title

dd if=/dev/zero of=$targetromname bs=$targetromsize count=1 >& /dev/null
dd if=$filename of=$targetromname conv=notrunc >& /dev/null
# Overwrite Nintendo Logo
# dd if=/dev/zero of=$targetromname conv=notrunc bs=1 count=156 seek=4 >& /dev/null

if [ $(ls -S -1 $filename $targetromname | head -n 1) != $targetromname ]; then
    echo "[ERROR] Too small target ROM size. Please edit makerom.sh"
    exit 1
fi
