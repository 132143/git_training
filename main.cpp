#include <iostream>

double op_add(double a, double b);
double op_sub(double a, double b);
double op_mul(double a, double b);
double op_div(double a, double b);

int main() {
    double a, b;
    char op;
    std::cout << "简易计算器：输入 3 + 5 这样的式子，Ctrl+D 结束\n";
    while (std::cin >> a >> op >> b) {
        double r = 0;
        switch (op) {
            case '+': r = op_add(a, b); break;
            case '-': r = op_sub(a, b); break;
            case '*': r = op_mul(a, b); break;
            case '/': r = op_div(a, b); break;
            default: std::cout << "不支持的运算符\n"; continue;
        }
        std::cout << a << " " << op << " " << b << " = " << r << "\n";
    }
    return 0;
}
