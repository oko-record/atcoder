#include <iostream>
#include <climits>

using namespace std;
using ll = long long;

ll pow_self(ll base) {
    ll result = 1;
    for (ll i = 0; i < base; i++) {
        if (LLONG_MAX / result < base) {
            return LLONG_MAX;
        }
        result *= base;
    }
    return result;
}

int main()
{
    ll b;
    cin >> b;
    for (ll iter = 1; ; iter++)
    {
        ll tmp = pow_self(iter);
        if (tmp > b)
        {
            cout << -1;
            return 0;
        }
        else if (tmp == b)
        {
            cout << iter;
            return 0;
        }
        // Overflow check not required here as pow_self returns LLONG_MAX on overflow
    }
}
