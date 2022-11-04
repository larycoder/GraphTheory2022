#!/bin/bash
cc="g++"
cflags=""
ldflags="-I lib/header"
src="lib/src"

echo Building... 🚀 🚀 🚀

mapfile -t file_array < <(ls | grep .cpp)

for i in "${file_array[@]}"; do
    $cc $cflags -o ${i/.cpp/.o} $i $src/List.cpp $src/Tool.cpp $ldflags 
done

echo Done 🎉 🎉 🎉