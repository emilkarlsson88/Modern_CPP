FROM ubuntu
MAINTAINER Emil Karlsson <emilkarlsson88@gmail.com>

RUN apt-get update && \
    apt-get install -y \
    gcc \
    cmake \
    cppcheck
