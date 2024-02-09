#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
bool kenaku[12][12];

int main()
{
    long long n, m, ans = LLONG_MAX;
    bool all = true;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(n));
    vector<long long> x, y, p;
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
    for (long long i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (long long i = 0; i < n; i++)
    {
        p.push_back(i + 1);
    } 
    for (int i = 0; i < m; i++) {
		kenaku[x[i]][y[i]] = true;
		kenaku[y[i]][x[i]] = true;
	}

    do
    {
        long long tmp = 0;
        for (long long i = 0; i < n; i++)
        {
            tmp += a[p[i] - 1][i];
        }
        bool flag = true;
        for (long long i = 0; i < n - 1; i++)
        {
            if (kenaku[p[i]][p[i + 1]] == true)
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