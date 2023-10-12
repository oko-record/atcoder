#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<string> s(n);
    rep(i, m) cin >> a[i];
    rep(i, n) cin >> s[i];
    vector<int> p(n);
    rep(i, n)
    {
        p[i] = i + 1;
        rep(j, m)
        {
            if (s[i][j] == 'o')
                p[i] += a[j];
        }
    }
    int mx = *max_element(p.begin(), p.end());
    rep(i, n)
    {
        vector<int> r;
        rep(j, m) if (s[i][j] == 'x') r.push_back(a[j]);
        sort(r.begin(), r.end());
        int ans = 0;
        while (p[i] < mx)
        {
            p[i] += r.back();
            r.pop_back();
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}