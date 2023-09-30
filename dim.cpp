#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
using ll = long long;

ll n, j;
int ans = INT_MAX;

int main()
{
    cin >> n;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            j = n / i;
        }
        ans = min(ans, (int)max(log10(i), log10(j)) + 1);
    }
    cout << ans;
}