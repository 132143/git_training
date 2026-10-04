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
        case '*': cout << a << op << b << "=" << a*b << endl; break;
        case '/':
            if(b==0) cout << "除数不能为0" << endl;
            else cout << a << op << b << "=" << 1.0*a/b << endl;
            break;
        default: cout << "非法运算符" << endl;
    }
    return 0;
}
