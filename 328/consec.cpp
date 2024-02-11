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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int n, q, l, r;
string s;

int main()
{
    cin >> n >> q >> s;
    vector<int> cnt(n, 0);
    rep(i, 0, n - 1)
    {
        cnt[i + 1] += cnt[i];
        if (s[i] == s[i + 1])
        {
            cnt[i + 1] += 1;
        }
    }
    rep(i, 0, q)
    {
        cin >> l >> r;
        cout << cnt[r - 1] - cnt[l - 1] << endl;
    }
}