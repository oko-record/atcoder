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
using vvi = vector<vector<int>>;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int h, w;
    cin >> h >> w;
    vvi a(h, vector<int>(w));
    vvi b(h, vector<int>(w));
    rep(i, 0, h)rep(j, 0, w) cin >> a[i][j];
    rep(i, 0, h)rep(j, 0, w) cin >> b[i][j];

    queue<vvi> q;
    map<vvi, int> dist;
    auto push = [&](vvi& s, int d)
    {
        if (dist.count(s)) return;
        dist[s] = d;
        q.push(s);
    };

    push(a, 0);

    while (!q.empty())
    {
        vvi s = q.front();
        q.pop();
        int d = dist[s];
        rep(i, 0, h - 1)
        {
            vvi ns = s;
            swap(ns[i], ns[i + 1]);
            push(ns, d + 1);
        }
        rep(j, 0, w - 1)
        {
            vvi ns = s;
            rep(i, 0, h)
            {
                swap(ns[i][j], ns[i][j + 1]);
            }
            push(ns, d + 1);
        }
    }

    if (dist.count(b))
    {
        cout << dist[b];
    }
    else
    {
        cout << "-1";
    }
    return 0;
}