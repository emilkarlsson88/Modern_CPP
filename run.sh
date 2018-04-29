#!/bin/bash
docker build -t image_gcc .
docker run -it -d image_gcc
