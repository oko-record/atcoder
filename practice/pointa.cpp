#include <iostream>
using namespace std;
#include "f.h"

void sub(int *ptr)
{
    cout << "sub" << endl;
    cout << "アドレス" << ptr << endl;
    cout << "変数" << *ptr << endl;

    *ptr = 456;
    cout << *ptr << endl;

    return;
}

int main()
{
    int val = 123;

    cout << "main" << endl;
    cout << "アドレス" << &val << endl;
    cout << "変数" << val << endl;

    sub(&val);

    cout << "main" << endl;
    cout << val << endl;

    Hello();

    return 0;
}