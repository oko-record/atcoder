#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
using ll = long long;
using graph = vector<vector<tuple<ll, ll>>>;

ll n;
graph g;
vector<ll> color;

bool dfs(ll node, ll cur = 0)
{
    color[node] = cur;
    cout << node;
    for (ll i = 0; i < (ll)g[node].size(); i++)
    {
        if (color[get<0>(g[node][i])] != -1)
        {
            if (color[get<0>(g[node][i])] == color[node])
            {
                continue;
            }
            continue;
        }

        if (get<1>(g[node][i]) % 2 == 0)
        {
            if (!dfs(get<0>(g[node][i]), color[node]))
            {
                return false;
            }
        }
        else
        {
            if (!dfs(get<0>(g[node][i]), 1 - color[node]))
            {
                return false;
            }
        }
    }
    return true;
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

    bool isok = true;
    for (ll i = 1; i < n; i++)
    {
        if (color[i] != -1)
        {
            continue;
        }
        if (!dfs(i))
        {
            isok = false;
        }
    }

    ll c = 0;
    for (auto &x : color)
    {
        if (c == 0)
        {
            c ++;
            continue;
        }
        cout << x << endl;
    }
}