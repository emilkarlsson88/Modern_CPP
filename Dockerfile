FROM ubuntu:14.04
MAINTAINER Emil Karlsson <emilkarlsson88@gmail.com>

RUN apt-get update && \
    apt-get install -y \
    gcc

