#!/bin/bash

PROJECT="rectangle_v2"

echo "Building $PROJECT project..."
mkdir build

gcc -c ./src/*.c
mv *.o ./build/
gcc build/*.o -o $PROJECT

echo "$PROJECT ready to run!"
