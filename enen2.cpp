#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long;
using graph = vector<vector<tuple<ll, ll>>>;

ll n;
graph g;
vector<ll> color;

void dfs(ll node, ll cur = 0)
{
    color[node] = cur;
    for (ll i = 0; i < (ll)g[node].size(); i++)
    {
        if (color[get<0>(g[node][i])] != -1)
        {
            continue;
        }
        if (get<1>(g[node][i]) % 2 == 0)
        {
            dfs(get<0>(g[node][i]), color[node]);
        }
        else
        {
            dfs(get<0>(g[node][i]), 1 - color[node]);
        }
    }
}

int main()
{
    cin >> n;
    g.resize(n + 1);
    color.assign(n + 1, -1);

    for (ll i = 0; i < n - 1; i++)
    {
        ll in;
        cin >> in;
        ll a, b;
        cin >> a >> b;
        g[in].emplace_back(a, b);
        g[a].emplace_back(in, b);
    }

    for (ll i = 1; i <= n; i++)
    {
        if (color[i] != -1)
        {
            continue;
        }
        dfs(i);
    }

    ll c = 0;
    for (auto &x : color)
    {
        if (c == 0)
        {
            c++;
            continue;
        }
        cout << x << endl;
    }
}