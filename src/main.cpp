#include <iostream>
#include "build_info.h"
#include "calculator.h"

int main() {
    std::cout << practice::message() << '\\n';
    std::cout << "8 + 4 = " << practice::add(8, 4) << '\\n';
    return 0;
}
