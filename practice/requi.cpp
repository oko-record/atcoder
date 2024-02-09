#include <iostream>
#include <vector>
using namespace std;

int n, m, q, ans;
vector<vector<int>> in;

void dfs(vector<int> a)
{
    if (a.size() == n + 1)
    {
        int now = 0;
        for (int i = 0; i < q; i++)
        {
            if (a[in[i][1]] - a[in[i][0]] == in[i][2])
            {
                now += in[i][3];
            }
        }
        ans = max(ans, now);
        return;
    }

    a.push_back(a.back());
    while (a.back() <= m)
    {
        dfs(a);
        a.back()++;
    }
}

int main()
{
    cin >> n >> m >> q;
    in.resize(q, vector<int>(4));
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> in[i][j];
        }
    }
    
    dfs(vector<int> (1, 1));
    cout << ans;
}