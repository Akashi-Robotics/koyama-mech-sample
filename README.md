# Project-Template-for-mbed

mbed用プロジェクトテンプレート

## System Requirement

Mbed CLI

## Usage

1. このリポジトリをクローンする

  ```terminal
  git clone https://github.com/Akashi-Robotics/Project-Template-for-mbed
  ```

2. 設定とコンパイル(e.g. board : NUCLEO_F446RE , profile: Develop)

  ```terminal
  mbed deploy
  mbed compile -t GCC_ARM -m NUCLEO_F446RE --profile mbed-profiles/develop.json
  ```

## Status


[![mbed-build-develop](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-develop.yml/badge.svg?branch=develop)](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-develop.yml)

[![mbed-release](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-release.yml/badge.svg)](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-release.yml)
