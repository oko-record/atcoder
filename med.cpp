#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

#define rep(i, l, m) for (ll i = (l); i < (m); i++)

ll n, k, a, b, day = 1, sum = 0;
map<ll, ll> bb;

int main()
{
    cin >> n >> k;
    rep(i, 0, n)
    {
        cin >> a >> b;
        bb[a] += b;
        sum += b;
    }

    for (auto &x : bb)
    {
        if (sum <= k)
        {
            cout << day;
            return 0;
        }
        day = x.first + 1;
        sum -= x.second;
    }
    cout << day;
}