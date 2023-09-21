#include <iostream>
using namespace std;

long a, b, c;

long nibun()
{
    long base = c, exp = b, ans = 1;
    while (exp)
    {
        if (exp % 2 == 1)
            ans *= base;
        exp >>= 1;
        base *= base;
    }
    return ans;
}

int main()
{
    cin >> a >> b >> c;
    long two = nibun();
    if (a < two)
        cout << "Yes";
    else
        cout << "No";
}
