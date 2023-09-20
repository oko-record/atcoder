#include <iostream>

using namespace std;

long long int_pow(long long base, long long exp) {
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
    cout << int_pow(a, b) + int_pow(b, a);
}
