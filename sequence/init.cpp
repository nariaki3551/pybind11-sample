#include <pybind11/pybind11.h>
#include "fibonacci.hpp"

PYBIND11_MODULE(sequence_cpp, m) {
   m.def("fibonacci", &fibonacci);
}
