#!/bin/bash

set -e

echo "Compiling..."

g++ src/*.cpp impl/Mechanics/*.cpp impl/Energy/*.cpp -o app

echo "Success!"
echo "Creating build..."

mkdir -p build

echo "Success!"
echo "Moving app into build..."

mv app build/

echo "Success!"

echo "Executing application..."
echo "------------------------"

./build/app

echo "------------------------"
echo "Done!"
