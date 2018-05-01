#!/bin/bash
docker build \
  -t image_gcc .
docker run \
  -it \
  -v /Users/EmilKarlsson/Documents/workspace/modern_cpp/modern_cpp_ex:/src \
  --name dev_modern_cpp \
  -d image_gcc
