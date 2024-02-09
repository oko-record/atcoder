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

#define rep(i, m, n) for (ll i = m; i < n; i++)

ll n, a = 0;
ll cnt = 0;
string s, an;
vector<int> p, pown;

ll powm(ll n)
{
    ll ans = 1;
    rep(i, 0, n)
    {
        ans *= 10;
    }
    return ans;
}

bool isPerfectSquare(ll cnt)
{
    ll root = static_cast<ll>(sqrt(cnt));
    return root * root == cnt;
}

int main()
{
    cin >> n;
    cin >> s;
    rep(i, 0, n)
    {
        p.push_back(i + 1);
    }

    rep(i, 0, n)
    {
        pown.push_back(powm(i));
    }

    do
    {
        rep(i, 0, n)
        {
            cnt += (s[p[i] - 1] - '0') * pown[i];
        }
        if (isPerfectSquare(cnt))
        {
            ll fg = sqrt(cnt);
            if (find(an.begin(), an.end(), fg) == an.end())
            {
                an.push_back(fg);
                a++;
            }
        }
        cnt = 0;

    } while (next_permutation(p.begin(), p.end()));

    cout << a;
}