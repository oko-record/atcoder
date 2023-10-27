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

ll n, t, d, ans = 0;
map<ll, vector<ll>> dict, span;

int main()
{
    cin >> n;
    rep(i, 0, n)
    {
        cin >> t >> d;
        dict[t].push_back(d);
        span[t].push_back(d - t);
    }

    for (auto &pair : dict) {
        sort(pair.second.begin(), pair.second.end());
    }
    for (auto &pair : span) {
        sort(pair.second.begin(), pair.second.end());
    }

    for (auto &pair : dict)
    {
        ans ++;
        if (!pair.second.empty())
        {
            pair.second.erase(pair.second.begin());
            span
        }

    }
}