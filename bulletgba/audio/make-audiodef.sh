#!/bin/sh

echo "#ifndef AUDIODEF_HPP"
echo "#define AUDIODEF_HPP"
echo

for f in *.o; do
    name=$(basename $f .o)
    if [ $(uname) = "Darwin" ]; then
        filesize=$(stat -f '%z' ${name}.raw)
    else
        filesize=$(stat -c '%s' ${name}.raw)
    fi
    echo "extern const char _binary_${name}_raw_start[];"
    echo "extern const char _binary_${name}_raw_end[];"
    echo "extern const char _binary_${name}_raw_size[];"
    echo "const int _filesize_${name}_raw = $filesize;"
    echo
done

echo "#endif"
echo
