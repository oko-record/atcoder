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
#define rep(i, l, n) for (ll i = (l); i < (n); i++)

ll n;
vector<ll> s, c, ss, cc;

int main()
{
    cin >> n;
    rep(i, 0, n)
    {
        ll a, b;
        cin >> a >> b;
        s.push_back(a);
        c.push_back(b);
    }

    bool f = false;

    do
    {
        bool f = false;
        for (ll i = 0; ; )
        {
            if (i >= s.size())
            {
                break;
            }
            if (c[i] > 1)
            {
                // ss.push_back(s[i] * 2);
                // cc.push_back(c[i] / 2);
                f = true;

                auto it = find(s.begin(), s.end(), s[i] * 2);
                if (it != s.end())
                {
                    ll ind = distance(s.begin(), it);
                    c[ind] += c[i] / 2;
                    if (c[i] % 2 == 1)
                    {
                        c[i] = 1;
                        i++;
                    }
                    else if (c[i] % 2 == 0)
                    {
                        //s.erase(s.begin() + i);
                        //c.erase(c.begin() + i);
                        s[i] = 0;
                        c[i] = 0;
                    }
                }
                else
                {
                    s.push_back(s[i] * 2);
                    c.push_back(c[i] / 2);
                    //c[c.size() - 1] += c[i] / 2;
                    if (c[i] % 2 == 1)
                    {
                        c[i] = 1;
                        i++;
                    }
                    else if (c[i] % 2 == 0)
                    {
                        //s.erase(s.begin() + i);
                        //c.erase(c.begin() + i);
                        s[i] = 0;
                        c[i] = 0;
                    }
                }
            }
            else
            {
                i++;
            }
        }

    } while (f);

    ll ans = 0;

    for (auto &x : c)
    {
        ans += x;
    }

    cout << ans;
}