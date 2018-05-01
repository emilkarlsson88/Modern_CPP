#!/bin/bash
docker run \
  -it \
  --name dev_modern_cpp \
  -v /Users/EmilKarlsson/Documents/workspace/modern_cpp/modern_cpp_ex:/src \
  -d image_modern_cpp
