#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using graph = vector<ll>;

ll n, cnt = 0;
graph g;
vector<int> num;

bool dfs(ll node)
{
    num[node] = cnt;
    if (num[g[node]] != 0)
    {
        
    }
}

int main()
{
    cin >> n;
    g.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    num.assign(n + 1, 0);

    dfs(1);
}