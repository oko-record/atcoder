#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, f, s;
    cin >> n;
    vector<vector<int>> ice(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s;
        ice[f].push_back(s);
    }

    int same = 0;
    vector<int> best;
    for (int i = 1; i <= n; i++)
    {
        sort(ice[i].begin(), ice[i].end());
        reverse(ice[i].begin(), ice[i].end());
        if (ice[i].size() > 1)
        {
            same = max(same, ice[i][0] + ice[i][1] / 2);
        }
        if (ice[i].size() > 0)
        {
            best.push_back(ice[i][0]);
        }
    }
    sort(best.begin(), best.end());
    reverse(best.begin(), best.end());
    if (best.size() > 1)
    {
        same = max(best[0] + best[1], same);
    }
    cout << same;
}