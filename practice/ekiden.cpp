#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, m, ans = INT_MAX;
    bool all = true;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> x, y, p;
    for (auto &row : a)
    {
        for (auto &x : row)
        {
            cin >> x;
        }
    }
    cin >> m;
    x.resize(m);
    y.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        p.push_back(i + 1);
    }

    do
    {
        int tmp = 0;
        for (int i = 0; i < n; i++)
        {
            int index = find(p.begin(), p.end(), i + 1) - p.begin();
            tmp += a[index][i];
        }
        bool flag = true;
        for (int i = 0; i < m; i++)
        {
            if (abs(p[x[i] - 1] - p[y[i] - 1]) == 1.0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            if (tmp < ans)
            {
                ans = tmp;
                all = false;
            }
        }
    } while (next_permutation(p.begin(), p.end()));

    if (all)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}