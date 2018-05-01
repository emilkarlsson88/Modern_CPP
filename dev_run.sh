#!/bin/bash
docker run \
  -it \
  --name dev_modern_cpp \
  -v $PWD/modern_cpp_ex:/src \
  -d image_modern_cpp
