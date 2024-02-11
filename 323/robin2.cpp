#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> cnt(n);
    vector<pair<int, int>> ans(n);
    for (auto &x : s)
    {
        cin >> x;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && s[i][j] == 'o')
            {
                cnt[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        ans[i].first = i;
        ans[i].second = cnt[i];
    }

    sort(ans.begin(), ans.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         {
             if (a.second == b.second)
             {
                 return a.first < b.first;
             }
             return a.second > b.second;
         });

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << ans[i].first + 1;
    }
    cout << endl;

    return 0;
}
