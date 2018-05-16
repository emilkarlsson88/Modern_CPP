#!/bin/bash
docker run \
  -it \
  --name modern_cpp \
  -v $PWD/modern_cpp_ex:/home/modern_cpp_ex \
  -d image_modern_cpp
