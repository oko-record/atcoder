#include <iostream>

using namespace std;
using ll = long long;

ll n, i = 0;

int main()
{
    cin >> n;
    for (ll x = 0; x < 998244353; x++)
    {
        if ((n - x) % 998244353 == 0)
        {
            cout << x;
            return 0;
        }
    }
}