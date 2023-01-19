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

## Develop Flow 

1. Issueを立てる
    - milestone, projectsに追加する
    - すぐに作業を始めるのなら、KANBAN(Projects ボード)上で In progressに移動する
2. 以下のルールでdevelopからブランチを切る
    - 機能追加の場合: `git checkout -b develop-feature-#123-ooo`
    - バグ修正の場合: `git checkout -b develop-fix-#123-ooo`
3. 機能を実装する
4. テストを実装してpassさせる
5. pushする
    - `git add .`
    - `git commit -m "ooo"`
    - `git push origin develop-feature-#123-ooo`
6. GitHub上でpull-requestを投げる
    - その際、コメントに`Close #123` または、`Fix #123` または`Resolve #123` を記載
    - CIの自動ビルド、自動テストがpassすることを確認する
7. 誰かがレビューして、マージ
8. developブランチに戻り、マージ後の最新状態にする
    - `git checkout develop`
    - `git pull`

## Release Flow

- タグを付けてpushする
  - 例
  - `git tag v1.0.0`
  - `git push origin v1.0.0`

## Status

[![mbed-build-develop](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-develop.yml/badge.svg?branch=develop)](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-develop.yml)

[![mbed-build-release](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-release.yml/badge.svg)](https://github.com/Akashi-Robotics/Project-Template-for-mbed/actions/workflows/mbed-build-release.yml)
