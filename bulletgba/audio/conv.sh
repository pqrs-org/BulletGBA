#!/bin/sh

for f in *.wav; do
    name=$(basename $f .wav)
    rawfile=${name}.raw
    sox $f -r 16384 -c 1 -b -s $rawfile
    arm-elf-objcopy --rename-section .data=.rodata -I binary -O elf32-littlearm -B ARM $rawfile ${name}.o
done
