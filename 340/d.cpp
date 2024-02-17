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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

// 無限大を表す値
const long long INF = 1LL << 60; // 十分大きな値を用いる (ここでは 2^60)

// 辺を表す型，ここでは重みを表す型を long long 型とする
struct Edge
{
    ll to;      // 隣接頂点番号
    ll w; // 重み
    Edge(ll to, ll w) : to(to), w(w) {}
};

// 重み付きグラフを表す型
using Graph = vector<vector<Edge>>;

// 緩和を実施する関数
template <class T>
bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    else
        return false;
}

int main()
{
    // 頂点数，辺数，始点
    // int N, M, s;
    // cin >> N >> M >> s;

    ll N, s = 0;
    cin >> N;

    // グラフ
    Graph G(N);
    for (ll i = 0; i < N - 1; ++i)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        G[i].push_back(Edge(i + 1, a));
        G[i].push_back(Edge(w, b));
    }

    // ダイクストラ法
    vector<bool> used(N, false);
    vector<long long> dist(N, INF);
    dist[s] = 0;
    for (int iter = 0; iter < N; ++iter)
    {
        // 「使用済み」でない頂点のうち，dist 値が最小の頂点を探す
        long long min_dist = INF;
        int min_v = -1;
        for (int v = 0; v < N; ++v)
        {
            if (!used[v] && dist[v] < min_dist)
            {
                min_dist = dist[v];
                min_v = v;
            }
        }

        // もしそのような頂点が見つからなければ終了する
        if (min_v == -1)
            break;

        // min_v を始点とした各辺を緩和する
        for (auto e : G[min_v])
        {
            chmin(dist[e.to], dist[min_v] + e.w);
        }
        used[min_v] = true; // min_v を「使用済み」とする
    }

    //結果出力
    // for (int v = 0; v < N; ++v)
    // {
    //     if (dist[v] < INF)
    //         cout << dist[v] << endl;
    //     else
    //         cout << "INF" << endl;
    // }
    cout << dist[N - 1];
}

// int main()
// {
//     ll n, s = 0;
//     cin >> n;
//     graph g(n);
//     queue<pair<ll, ll>> q;
//     vector<ll> stage(n, 0);

//     rep(i, 0, n - 1)
//     {
//         ll a, b, x;
//         cin >> a >> b >> x;
//         g[i].emplace_back(i + 1, a);
//         g[i].emplace_back(x, b);
//     }

//     for (auto p : g[0])
//     {
//         q.push(p);
//     }
//     stage[0] = 1;

//     while (!q.empty())
//     {
//         auto next = q.front();
//         q.pop();
//         cout << next.first << endl;;
//         stage[next.first] = 1;
//         if (next.first == n)
//         {
//             cout << s << endl;
//         }
//         s += next.second;
//         for (auto p : g[next.first])
//         {
//             if (!stage[p.first])
//                 q.push(p);
//         }
//     }

// auto dfs = [&](auto dfs, ll num, ll s) ->
// {
//     for (auto p : g[num])
//     {
//         dfs(dfs, p.first, s + p.second);
//     }
// };
// dfs(dfs, 0, s)}