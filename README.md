# learn_cpp

C++の勉強をするためのリポジトリ

## Setup

CMakeをインストールしておく．

```
$ brew install opencv
$ brew install cmake
```

## opencv_test

opencvを使うためのテスト用リポジトリ

ディレクトリ構成

```
opencv_test
|- main.cpp
|- CMakeLists.txt
|- build
```

### Usage

"build"が存在しない場合は生成する

```
$ mkdir -p build
```

CMakeでビルドする

```
$ cd build
$ cmake ..
```

Makefileが生成されるのでmakeでビルドする

```
$ make
```

実行ファイルが生成されるので実行する

```
$ ./main
```

### References

[【C++】OpenCV3をOSXにインストールしてcmakeで優勝💪💪【完全に理解した】](https://cha-shu00.hatenablog.com/entry/2018/09/02/143853)

