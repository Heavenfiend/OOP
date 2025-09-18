#include <iostream>
#include "func.h"
int main() {
    std::cout << "Enter a number of pieces: ";
    int n, m;
    std::cin >> n >> m;
    division(n, m);
    return 0;
}