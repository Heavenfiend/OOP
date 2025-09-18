//
// Created by Егор on 9/16/2025.
//
#include <iostream>
#include "func.h"

void division(int n, int m) {
    if (n > 0 & m > 0) {
        std::cout <<"Amount of breaks: " << n * m - 1 << std::endl;
    } else std::cout << "0" << std::endl;
}