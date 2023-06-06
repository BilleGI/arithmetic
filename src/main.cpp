#include <iostream>
#include <vector>
#include "math_lib.h"

int main()
{
    std::cout << "The program counts the arithmetic mean." << std::endl;
    std::vector<int> a;
    input(a);
    std::cout << "Arithmetic: " << arithmetic(a) << std::endl;;
    float b[10];
    input(b, 10);
    std::cout << "Arithmetic: " << arithmetic(b, 10) << std::endl;
    std::vector<double> c;
    input(c);
    std::cout << "Arithmetic: " << arithmetic(c) << std::endl;
    return 0;
}
