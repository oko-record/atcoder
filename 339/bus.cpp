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

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    ll n, sum = 0, tmp, b = 0, ans = 0;
    cin >> n;
    vector<int> a(n), t(n);
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] >= 0)
        {
            t[i] = 0;
        }
        else if (a[i] < 0)
        {
            t[i] = abs(a[i]);
        }
        sum += a[i];
        ans += a[i];
        if (sum <= 0)
        {
            b += abs(sum);
            sum = 0;
        }
    }
    cout << ans + b;
}