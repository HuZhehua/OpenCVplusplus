#!/usr/bin/env bash

rm -r ./build/*
cd build
cmake ..
make -j8
cd ../


