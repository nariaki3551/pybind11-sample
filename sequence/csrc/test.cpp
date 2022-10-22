#include <iostream>
#include "fibonacci.hpp"

int main() {
   for ( int i = 1; i < 5; ++i ) {
      std::cout << "fibonacci(" << i << ") = " << fibonacci(i) << std::endl;
   }
}
