#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, m, k, u, v, w, tmp, tmp_v, cnt = 0;
    cin >> n >> m >> k;
    vector<vector<int>> g(n, vector<int>(m)), to(n);
    vector<int> color(n, -1);
    rep(i, 0, m)
    {
        cin >> u >> v;
        cin >> w;
        g[u - 1][v - 1] = w;
        g[v - 1][u - 1] = w;
        to[v - 1].push_back(u - 1);
        to[u - 1].push_back(v - 1);
    }

    auto dfs = [&](auto dfs, int i, int c = 0) -> bool
    {
        color[i] = c;

        tmp = INT_MAX;
        bool flag = false;

        cout << 1;

        for (int v : to[i])
        {
            if (color[v] == -1)
            {
                if (tmp > g[i][v])
                {
                    tmp_v = v;
                    tmp = g[i][v];
                    flag = true;
                }
            }
        }
        cout << 1;

        if (flag) 
        {
            cnt += g[i][tmp_v];
            dfs(dfs, tmp_v);
        }

    };

    dfs(dfs, 0);

    rep(i, 0, n)
    {
        cout << color[i] << endl;;
    }
    cout << cnt;
}
