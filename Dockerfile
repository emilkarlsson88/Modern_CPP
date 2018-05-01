FROM ubuntu:17.10
MAINTAINER Emil Karlsson <emilkarlsson88@gmail.com>

RUN apt-get update && \
    apt-get install -y software-properties-common wget && \
    wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key|apt-key add && \
    apt-add-repository "deb http://apt.llvm.org/artful/ llvm-toolchain-artful-6.0 main" && \
    apt-get update && \
    apt-get -y upgrade && \
    apt-get install -y \
    gcc \
    cmake \
    cppcheck \
    clang-format-6.0 \
    clang-tidy-6.0

RUN ln -s /usr/bin/clang-format-6.0 /usr/local/bin/clang-format
RUN ln -s /usr/bin/clang-tidy-6.0 /usr/local/bin/clang-tidy

RUN mkdir -p /home/modern_cpp_ex
COPY ./modern_cpp_ex /home/modern_cpp_ex

