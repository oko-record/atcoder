#include <iostream>
#include <cassert>
#include <numeric>

using namespace std;

long long a, b, c;

long long gcd2(long long a, long long b)
{
    if (a % b == 0)
        return b;
    else
        return gcd2(b, a % b);
}

int main()
{
    cin >> a >> b >> c;
    long long gcds = gcd2(a, gcd2(b, c));
    cout << a / gcds - 1 + b / gcds - 1 + c / gcds - 1;
}