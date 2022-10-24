# pybind11-sample
sample project for pybind11

## Build

```
git clone https://github.com/nariaki3551/pybind11-sample.git
cd pybind11-sample
git submodule update --init --recursive
python -m pip install .
```

## Usage

```python
import sequence
sequence.fibonacci(10)
>>> python::55
```
