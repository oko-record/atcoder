#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> to(n);
    

    rep(i, 0, n - 1)
    {
        int a, b;
        cin >> a >> b;
        a--; b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    int ans = n;

    for (int v : to[0])
    {
        auto f = [&](auto f, int v, int p = -1) -> int
        {
            int res = 1;
            for (int u : to[v])
            {
                if (u == p) continue;
                res += f(f, u, v);
            }
            return res;
        };
        int now = n - f(f, v, 0);
        ans = min(ans, now);
    }
    cout << ans;

    return 0;
}