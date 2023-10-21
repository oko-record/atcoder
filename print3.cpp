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

#define rep(i, m, n) for (int i = m; i < n; i++)

ll n, t, d, mini = LLONG_MAX, min_i, ans = 0;
map<ll, vector<ll>> span;

int main()
{
    cin >> n;
    rep(i, 0, n)
    {
        cin >> t >> d;
        span[t].push_back(d);
    }

    rep(i, 1, 2 * 100000 + 1)
    {
        mini = LLONG_MAX;
        bool flag = false;
        if (span.empty())
        {
            break;
        }
        for (auto &pair : span)
        {
            if (pair.first <= i)
            {
                if (pair.second[0] + pair.first < mini)
                {
                    mini = pair.second[0];
                    min_i = pair.first;
                    cout << mini << endl;
                    flag = true;
                }
            }
        }
        if (flag)
        {
            span[min_i].erase(span[min_i].begin());
            ans++;
        }
    }
    cout << ans;
}