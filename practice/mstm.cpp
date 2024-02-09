#include <vector>
#include <iostream>
using namespace std;

class UnionFind
{
public:
    std::vector<int> parent;

    UnionFind(int n) : parent(n)
    {
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] == x)
        {
            return x;
        }
        else
        {
            return parent[x] = find(parent[x]);
        }
    }

    void unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if (x != y)
        {
            parent[x] = y;
        }
    }

    bool same(int x, int y)
    {
        return find(x) == find(y);
    }
};

struct Edge
{
    int a, b;
    long long w;
    Edge() {}
    Edge(int a, int b, long long w) : a(a), b(b), w(w) {}
};

// 使用例
int main()
{
    int n, m;
    long long k;
    cin >> n >> m >> k;

    vector<Edge> es;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        u--;
        v--;
        es.emplace_back(u, v, w);
    }

    const long long INF = 1e18;
    long long ans = INF;

    auto dfs = [&](auto dfs, int i, vector<int> is) -> void
    {
        if (is.size() == n - 1)
        {
            UnionFind uf(n);
            bool ok = true;
            long long now = 0;
            for (int ei : is)
            {
                auto e = es[ei];
                if (uf.same(e.a, e.b))
                {
                    ok = false;
                }
                uf.unite(e.a, e.b);
                now = (now + e.w) % k;
            }
            if (ok)
            {
                ans = min(now, ans);
            }
            return;
        }
        if (i == m)
            return;
        dfs(dfs, i + 1, is);
        is.push_back(i);
        dfs(dfs, i + 1, is);
    };

    dfs(dfs, 0, {});
    cout << ans;
}
