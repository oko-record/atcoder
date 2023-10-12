#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m), cnt(n);
    vector<vector<int>> tmp(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    vector<string> s(n);
    for (auto &x : s)
    {
        cin >> x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'o')
            {
                cnt[i] += a[j];
            }
            else
            {
                tmp[i].push_back(a[j]);
            }
        }
        sort(tmp[i].begin(), tmp[i].end(), greater<int>());
    }

    for (int i = 0; i < n; i++)
    {
        int c = cnt[i];
        int acnt = 1;  // 必要な最小問題数
        for (int j = 0; j < tmp[i].size(); j++)
        {
            c += tmp[i][j];
            bool allButI = all_of(cnt.begin(), cnt.begin() + i, [c](int x)
                                  { return x < c; }) &&
                           all_of(cnt.begin() + i + 1, cnt.end(), [c](int x)
                                  { return x < c; });

            if (allButI)
            {
                cout << acnt << endl;
                break;
            }
            acnt++;
        }
        if (acnt > tmp[i].size())
        {
            cout << tmp[i].size() << endl;
        }
    }
    return 0;
}
