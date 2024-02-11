#include <iostream>

using namespace std;

long long pow_int(long long base, long long exp)
{
    long long result = 1;
    while (exp) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << pow_int(a, b) + pow_int(b, a);
}