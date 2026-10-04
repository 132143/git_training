#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout << "请输入表达式，例如：3+5：" << endl;
    cin >> a >> op >> b;
    switch(op)
    {
        case '+': cout << a << op << b << "=" << a+b << endl; break;
        case '-': cout << a << op << b << "=" << a-b << endl; break;
    }
    return 0;
}
