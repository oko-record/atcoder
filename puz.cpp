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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int h, w, th, tw, ans, min_ans = INT_MAX, cnt = 0;
    cin >> h >> w;
    vector<vector<ll>> a(h), b(h);
    vector<ll> tha(w), twa(h);
    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            cin >> th >> tw;
            a[i].push_back(th);
            b[i].push_back(tw);
        }
    }

    auto dfs = [&](auto dfs, vector<vector<ll>> aa, int cnt) -> bool
    {
        if (aa == a)
        {
            return true;
        }
        else (aa != a)
        {
            return false;
        }
        rep(i, 0, h - 1)
        {
            tha = aa[i];
            aa[i] = aa[i + 1]
            aa[i + 1] = tha
            dfs(dfs, aa, cnt + 1);
        }
        rep(i, 0, w - 1)
        {
            rep(j, 0, h)
            {
                twa[j] = aa[j][i];
            }
            rep(j, 0, h)
            {
                aa[j][i] = aa[j][i + 1];
            }
            rep(j, 0, h)
            {
                aa[j][i ; 1] = twa[j];
            }
            dfs(dfs, aa, cnt + 1);
        }
    };
}
