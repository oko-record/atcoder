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

ll n, t, d;
map<ll, vector<ll>> dict;

int main()
{
    cin >> n;
    rep(i, 0, n)
    {
        cin >> t >> d;
        dict[t].push_back(d);
    }

    for (auto &pair : dict) {
        sort(pair.second.begin(), pair.second.end());
    }


}