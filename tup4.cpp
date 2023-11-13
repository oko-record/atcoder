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
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m), ans(n, -1);
    vector<vector<int>> to(n);
    rep(i, 0, m)
    {
        cin >> a[i];
        a[i]--;
    }
    rep(i, 0, m)
    {
        cin >> b[i];
        b[i]--;
    }
    
    rep(i, 0, m)
    {
        to[a[i]].push_back(b[i]);
        to[b[i]].push_back(a[i]);
    }

    auto dfs = [&](auto dfs, int v, int c = 0) -> bool
    {
        if (ans[v] != -1)
        {
            return ans[v] == c;
        }
        ans[v] = c;

        for (int u : to[v])
        {
            if (!dfs(dfs, u, c ^ 1))
            {
                return false;
            };
        }
        return true;
    };

    rep(i, 0, n)
    {
        if (ans[i] == -1)
        {
            if (!dfs(dfs, i))
            {
                cout << "No";
                return 0;
            }
        }
    }

    cout << "Yes";
}