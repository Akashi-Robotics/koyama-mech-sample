# Project-Template-for-mbed

講習会用小山機構サンプルコード

## System Requirement

Mbed CLI

## Usage

1. このリポジトリをクローンする

  ```terminal
  git clone https://github.com/Akashi-Robotics/koyama-mech-sample
  ```

2. 設定とコンパイル(e.g. board : NUCLEO_L432KC , profile: Develop)

  ```terminal
  mbed deploy
  mbed compile -t GCC_ARM -m NUCLEO_L432KC --profile mbed-profiles/develop.json
  ```

## Status

[![mbed-build-develop](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-develop.yml/badge.svg?branch=develop)](https://github.com/Akashi-Robotics/koyama-mech-sample/actions/workflows/mbed-build-develop.yml)

[![mbed-build-release](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-release.yml/badge.svg)](https://github.com/Akashi-Robotics/koyama-mech-sample/actions/workflows/mbed-build-release.yml)
