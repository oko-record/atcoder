#include <iostream>
#include <vector>
#include <bitset>
#include <climits>

using namespace std;
using ll = long long;

ll n, m, ans = 0;
vector<ll> k, p;
vector<vector<ll>> s;

int main()
{
    cin >> n >> m;
    k.resize(m);
    s.resize(m);
    p.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++)
        {
            ll in;
            cin >> in;
            s[i].push_back(in);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        bitset<100> sw(i);
        //cout << sw[0];
        ll iter = 0;
        for (int j = 0; j < m; j++)
        {
            ll cnt = 0;
            for (int l = 0; l < s[j].size(); l++)
            {
                if (sw[s[j][l] - 1])
                {
                    cnt ++;
                }
            }
            if (cnt % 2 == p[j])
            {
                iter ++;
            }
        }
        if (iter == m)
        {
            ans ++;
        }
    }
    cout << ans;
}