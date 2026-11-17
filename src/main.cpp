#include <iostream>
#include "build_info.h"
#include "calculator.h"

int main() {
    std::cout << "My First Build and Release Task" << '\n';
    std::cout << "8 + 4 = " << practice::add(8, 4) << '\\n';
    return 0;
}
