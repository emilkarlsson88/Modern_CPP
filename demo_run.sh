#!/bin/bash
docker build -t image_gcc .
docker run -it --name modern_cpp -d image_gcc
