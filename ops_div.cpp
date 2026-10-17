#include <iostream>
double op_div(double a, double b) {
    if (b == 0) { std::cout << "错误：除数不能为 0" << std::endl; return 0; }
    return a / b;
}
