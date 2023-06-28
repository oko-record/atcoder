//hoge.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello!" << endl;

    const int x = 1;
    cout << x << endl;

    constexpr int y = 3;
    cout << y << endl;

    auto z = 5.1;
    cout << z << endl;

    return 0;
}
