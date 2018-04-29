#!/bin/bash
docker build -t image_ubuntu .
docker run -it -d image_ubuntu
