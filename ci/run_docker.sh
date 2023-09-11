#!/bin/bash

set -e

BUILD_IMAGE=clang-cuda
docker image inspect "$BUILD_IMAGE" &> /dev/null || {
  docker build -t "$BUILD_IMAGE" ci
}

# If you have a GPU instance configured in your machine
docker run --rm -v "$PWD":/src -w /src --gpus all --privileged -it "$BUILD_IMAGE" /bin/bash -l
