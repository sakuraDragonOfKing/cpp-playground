# cpp-playground

![CI](https://github.com/sakuraDragonOfKing/cpp-playground/actions/workflows/ci.yml/badge.svg)

我的 C++ 工程化练习场。每完成一张任务卡，这里就多一个痕迹。

## 怎么编译和测试

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build -j
ctest --test-dir build --output-on-failure
```

## 目录结构

- `include/` —— 头文件
- `src/` —— 实现
- `tests/` —— 测试

## 学到 / 踩到的

- 2026-12：第一次搭 CMake + GoogleTest + GitHub Actions，踩到 `.wslconfig` 格式问题
