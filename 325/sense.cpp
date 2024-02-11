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

int h, w, ans = 0;
vector<string> s;
vector<vector<int>> d;

void check(int i, int j)
{
    d[i][j] = ans;
    rep(m, -1, 2)
    {
        if ((i + m) < 0 || (i + m) >= h)
        {
            continue;
        }
        rep(n, -1, 2)
        {
            if ((j + n) < 0 || (j + n) >= w)
            {
                continue;
            }
            if (s[i + m][j + n] == '#')
            {
                if (d[i + m][j + n] == 0)
                {
                    check(i + m, j + n);
                }
            }
        }
    }
}

int main()
{
    cin >> h >> w;
    s.resize(h);
    d.resize(h, vector<int>(w));
    rep(i, 0, h)
    {
        cin >> s[i];
    }

    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            if (s[i][j] == '#')
            {
                if (d[i][j] == 0)
                {
                    ans++;
                    check(i, j);
                }
            }
        }
    }
    cout << ans;
}