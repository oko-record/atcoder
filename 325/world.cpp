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

ll n, sum = 0, ans = 0;
vector<ll> w, x;

int main()
{
    cin >> n;
    w.resize(n);
    x.resize(n);
    rep(i, 0, n)
    {
        cin >> w[i] >> x[i];
    }
    rep(i, 0, 24)
    {
        rep(j, 0, n)
        {
            if ((x[j] + i) % 24 >= 9 && (x[j] + i) % 24 <= 17)
            {
                sum += w[j];
            }
        }
        if (sum > ans)
        {
            ans = sum;
        }
        sum = 0;
    }
    cout << ans;
}