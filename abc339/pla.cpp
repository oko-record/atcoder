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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
    auto dfs = [&](auto dfs, int h1, int w1, int h2, int w2, int countn) -> void
    {
        rep(dir, 0, 3)
        {

        
        if (s[h1 + dx[dir]][w1 + dy[dir]] == 'P')
        {
            cout << countn;
            exit(0);
        }
        else if (s[h1 + dx[dir]][w1 + dy[dir]] == '.')
        {
            s[h1 + dx[dir]][w1 + dy[dir]] = 'P';
            h1 = h1 + dx[dir];
            w1 = w1 + dy[dir];
        }
        if (s[h2 + dx[dir]][w2 + dy[dir]] == 'P')
        {
            cout << countn;
            exit(0);
        }
        else if (s[h2 + dx[dir]][w2 + dy[dir]] == '.')
        {
            s[h2 + dx[dir]][w2 + dy[dir]] = 'P';
            h2 = h2 + dx[dir];
            w2 = w2 + dy[dir];
        }
        dfs(dfs, h1, w1, h2, w2, dir, countn + 1);
        return;
        }
    };
    int h1, w1, h2, w2;
    bool f = false;
    rep(i, 0, s[0].size())
    {
        rep(j, 0, n)
        {
            if (s[i][j] == 'P')
            {
                if (f)
                {
                    h2 = i;
                    w2 = j;
                }
            }
        }
    }
    dfs(dfs, h1, w1, h2, w2, 0);
}