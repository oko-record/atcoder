#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;
#define rep(i, l, n) for (int i = (l); i < (n); i++)

int n, x, ans;
ll y;
map<int, ll> mp;

int main()
{
    cin >> n;
    rep(i, 0, n)
    {
        cin >> x >> y;
        while ((x & 1) == 0)
        {
            x >>= 1;
            y <<= 1;
        }
        mp[x] += y;
    }

    map<int, ll>::iterator itr = mp.begin();
    while (itr != mp.end())
    {
        y = (*itr).second;
        while (y > 0)
        {
            if (y & 1)
            {
                ans++;
            }
            y >>= 1;
        }
        itr++;
    }
    cout << ans << endl;
}