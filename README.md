# pybind11-sample
Simple sample project for pybind11

This post describes this repository in Japanese: https://inarizuuuushi.hatenablog.com/entry/2022/10/24/090000

## Build

```
git clone https://github.com/nariaki3551/pybind11-sample.git
cd pybind11-sample
git submodule update --init --recursive
python -m pip install .
```

## Usage

1. Call a function implemented in C++.

```python
import sequence.sequence_cpp
sequence.sequence_cpp.fibonacci(10)
>>> 55
```

2. Call the function which wraps the above function in Python.

```python
import sequence
sequence.fibonacci(10)
>>> python::55
```
