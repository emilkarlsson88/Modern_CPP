FROM ubuntu
MAINTAINER Emil Karlsson <emilkarlsson88@gmail.com>

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
    gcc \
    cmake \
    cppcheck \
    clang-format-3.9

RUN ln -s /usr/bin/clang-format-3.9 /usr/bin/clang-format
