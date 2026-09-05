// Build: e5e4c7b32a2ed05a346c0bd454f0eb3a
#include <algorithm>
#include <iostream>

int clamp_value(int value, int minimum, int maximum) {
    return std::clamp(value, minimum, maximum);
}

int main() {
    std::cout << clamp_value(12, 0, 10) << '\n';
    return 0;
}
