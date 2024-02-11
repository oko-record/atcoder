#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <cstdlib>
#include <queue>

using namespace std;
using ll = long long;
using graph = vector<vector<pair<ll, ll>>>;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    ll n, s = 0;
    cin >> n;
    graph g(n);
    queue<pair<ll, ll>> q;
    vector<ll> stage(n, 0);

    rep(i, 0, n - 1)
    {
        ll a, b, x;
        g[i].emplace_back(i + 1, a);
        g[i].emplace_back(x, b);
    }

    for (auto p : g[0])
    {
        q.push(p);
    }
    stage[0] = 1;

    while (!q.empty())
    {
        auto next = q.front();
        q.pop();
        cout << next.first << endl;;
        stage[next.first] = 1;
        if (next.first == n)
        {
            cout << s;
        }
        s += next.second;
        for (auto p : g[next.first])
        {
            if (!stage[p.first])
                q.push(p);
        }
    }

    // auto dfs = [&](auto dfs, ll num, ll s) ->
    // {
    //     for (auto p : g[num])
    //     {
    //         dfs(dfs, p.first, s + p.second);
    //     }
    // };
    // dfs(dfs, 0, s)
}