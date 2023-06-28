#include <iostream>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << a / b << endl;
    }
    else
    {
        cout << a / b + 1 << endl;
    }
    return 0;
}