#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <string>
#include <algorithm>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long;

int n, k, now, tmp, tans, ans = INT_MAX;
vector<ll> a;
vector<int> b;

int main()
{
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    rep(i, n) cin >> a[i];
    rep(i, n)
    {
        if (i < k)
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
    }
    sort(b.begin(), b.end());

    do
    {
        now = 0;
        tans = 0;
        rep(i, n)
        {
            if (b[i] != 0)
            {
                now += a[i];
            }
        } 

        string now_str = to_string(now);
        int now_len = now_str.length();
        for (int i = 0; i < now_len; i++)
        {
            tmp = now_str[i] - '0';
            if (tmp < 5)
            {
                tans += tmp;
            }
            else
            {
                tans += tmp - 4;
            }
        }

        ans = min(ans, tans);

    } while (next_permutation(b.begin(), b.end()));

    cout << ans;
}