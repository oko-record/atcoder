#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <climits>

using namespace std;

int n;
vector<int> a, b;
map<int, vector<int>> g;
vector<int> dist;

void getdist(int start)
{
    fill(dist.begin(), dist.end(), INT_MAX);

    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (int to : g[pos])
        {
            if (dist[to] == INT_MAX)
            {
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }
}

int main()
{
    cin >> n;
    int tmp_a, tmp_b;
    for (int i = 1; i < n; i++)
    {
        cin >> tmp_a >> tmp_b;
        a.push_back(tmp_a);
        b.push_back(tmp_b);
        g[a[i - 1]].push_back(b[i - 1]);
        g[b[i - 1]].push_back(a[i - 1]);
    }
    dist.resize(n + 1, INT_MAX);

    getdist(1);
    int maxn1 = -1, maxid1 = -1;
    for (int i = 1; i < n + 1; i++)
    {
        if (maxn1 < dist[i])
        {
            maxn1 = dist[i];
            maxid1 = i;
        }
    }

    getdist(maxid1);
    int maxn2 = -1;
    for (int i = 1; i < n + 1; i++)
    {
        maxn2 = max(maxn2, dist[i]);
    }

    cout << maxn2 + 1 << endl;
}