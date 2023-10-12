#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> cnt(n), ans2;
    vector<pair<int, int>> ans(n + 1);
    for (auto &x : s)
    {
        cin >> x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i][j] == 'o')
            {
                cnt[i]++;
            }
            else
            {
                cnt[j]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        ans[i].first = i;
        ans[i].second = cnt[i];
    }

    sort(ans.begin(), ans.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    ans[n].first = -1;
    ans[n].second = -1;

    bool f = false;
    vector<int> asd;
    for (int i = 0; i < n; i++)
    {
        if (ans[i].second == ans[i + 1].second)
        {
            f = true;
            asd.push_back(ans[i].first);
        }
        else
        {
            if (f)
            {
                sort(asd.begin(), asd.end());
                for (auto &x : asd)
                {
                    ans2.push_back(x);
                }
                f = false;
            }
            ans2.push_back(ans[i].first);
        }
    }

    bool flag = false;
    for (auto &x : ans2)
    {
        if (flag)
        {
            cout << ' ';
        }
        cout << x + 1;
        flag = true;
    }
}