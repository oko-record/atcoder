#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <cstdlib>
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (ll i = (m); i < (n); i++)

int main()
{
    ll n, q;
    cin >> n;
    string s;
    cin >> s >> q;
    map<char, vector<ll>> m;
    char a, b;
    rep(i, 0, n)
    {
        m[s[i]].emplace_back(i);
    }
    rep(i, 0, q)
    {
        cin >> a >> b;
        if (m[a].size() != 0 && a != b)
        {
            for (auto x : m[a])
            {
                s[x] = b;
                m[b].emplace_back(x);
                // auto it = remove(m[a].begin(), m[a].end(), x);
                // m[a].erase(it, m[a].end());
            }
            m[a].clear();
        }
    }
    cout << s;
}