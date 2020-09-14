#include "result.h"
#include <iostream>

//initialize var in base class
Result::Result() : nPositiv(0), nNegative(0), nZero(0) {
    std::cout << "Constructor of Result" << std::endl;
}
