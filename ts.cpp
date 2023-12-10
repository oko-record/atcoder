#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (ll i = (m); i < (n); i++)

int main()
{
    ll n, m, rt = 0, crt = 0;
    string s;
    cin >> n >> m;
    cin >> s;

    auto dfs = [&](auto dfs, ll i, ll t, ll crt, ll rt) -> bool
    {
        if (i == n)
        {
            cout << crt;
            return true;
        }
        else
        {
            if (s[i] == '0')
            {
                return dfs(dfs, i + 1, m, crt, 0);
            }
            else if (s[i] == '1')
            {
                if (t - 1 >= 0)
                {
                    return dfs(dfs, i + 1, t - 1, crt, rt);
                }
                else if (rt < crt)
                {
                    return dfs(dfs, i + 1, t, crt, rt + 1);
                }
                else
                {
                    return dfs(dfs, i + 1, t, crt + 1, rt + 1);
                }
            }
            else if (s[i] == '2')
            {
                if (rt < crt)
                {
                    return dfs(dfs, i + 1, t, crt, rt + 1);
                }
                else
                {
                    return dfs(dfs, i + 1, t, crt + 1, rt + 1);
                }
            }
        }
    };

    dfs(dfs, 0, m, 0, 0);
}