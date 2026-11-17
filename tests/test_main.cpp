#include <iostream>
#include "calculator.h"

int main() {
    int failures = 0;
    if (practice::add(8, 4) != 12) {
        std::cerr << "FAIL: add(8, 4) should return 12\\n";
        ++failures;
    }
    if (practice::subtract(8, 4) != 4) {
        std::cerr << "FAIL: subtract(8, 4) should return 4\\n";
        ++failures;
    }
    if (practice::add(-3, 3) != 0) {
        std::cerr << "FAIL: add(-3, 3) should return 0\\n";
        ++failures;
    }
    if (failures == 0) {
        std::cout << "All tests passed\\n";
    }
    return failures == 0 ? 0 : 1;
}
