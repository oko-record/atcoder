#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    long double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    cout << ((long long int)(pi * pow(10, n))) / pow(10, n);
}