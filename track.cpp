#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (ll i = (m); i < (n); i++)

int main()
{
    ll n, q, index = 0;
    cin >> n >> q;

    vector<ll> as, bs, px, py(n, 0), npx, npy;
    rep(i, 0, n)
    {
        px.push_back(i + 1);
    }

    rep(i, 0, q)
    {
        ll a;
        char b;
        cin >> a >> b;
        as.push_back(a);
        bs.push_back(b);
    }

    rep(i, 0, q)
    {
        if (as[i] == 1)
        {
            if (bs[i] == 'R')
            {
                if (index == 0)
                {
                    npx.push_back(px[index] + 1);
                    npy.push_back(py[index]);
                }
                else
                {
                    npx.push_back(npx[index - 1] + 1);
                    npy.push_back(npy[index - 1]);
                }
            }
            else if (bs[i] == 'L')
            {
                if (index == 0)
                {
                    npx.push_back(px[index] - 1);
                    npy.push_back(py[index]);
                }
                else
                {
                    npx.push_back(npx[index - 1] - 1);
                    npy.push_back(npy[index - 1]);
                }
            }
            else if (bs[i] == 'U')
            {
                if (index == 0)
                {
                    npx.push_back(px[index]);
                    npy.push_back(py[index] + 1);
                }
                else
                {
                    npx.push_back(npx[index - 1]);
                    npy.push_back(npy[index - 1] + 1);
                }
            }
            else if (bs[i] == 'D')
            {
                if (index == 0)
                {
                    npx.push_back(px[index]);
                    npy.push_back(py[index] - 1);
                }
                else
                {
                    npx.push_back(npx[index - 1]);
                    npy.push_back(npy[index - 1] - 1);
                }
            }
            index++;
        }

        else if (as[i] == 2)
        {
            ll b = bs[i] - '0';

            if (b - index - 1 >= 0)
            {
                cout << px[b - index - 1] << ' ' << py[b - index - 1] << endl;
            }
            else
            {
                cout << npx[npx.size() - b] << ' ' << npy[npx.size() - b] << endl;
            }
        }
    }
}