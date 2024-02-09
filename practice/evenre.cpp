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
    int n, u, v, w;
    cin >> n;
    vector<vector<pair<int, int>>> to(n);
    vector<int> color(n, -1);
    rep(i, 0, n - 1)
    {
        cin >> u >> v;
        cin >> w;
        to[u - 1].push_back({v - 1, w});
        to[v - 1].push_back({u - 1, w});
    }

    auto dfs = [&](auto dfs, int i, int c = 0) -> void
    {
        color[i] = c;
        for (pair row : to[i])
        {
            int j = row.first;
            if (color[j] != -1)
                continue;
            if (row.second % 2 == 0)
            {
                dfs(dfs, j, c);
            }
            else
            {
                dfs(dfs, j, c ^ 1);
            }
        }
    };

    dfs(dfs, 0);

    rep(i, 0, n)
    {
        cout << color[i] << endl;
    }
}