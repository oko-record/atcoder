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
    int h, w, n, x = 0, y = 0, dir = 1, tmpx, tmpy;
    cin >> h >> w >> n;
    vector<vector<char>> g(h, vector<char>(w));
    vector<int> dx = {1, 0, -1, 0}, dy = {0, -1, 0, +1};
    rep(i, 0, h) rep(j, 0, w) g[i][j] = '.';
    rep(i, 0, n)
    {
        if (g[x][y] == '.')
        {
            if (dir == 0)
            {
                dir = 3;
            }
            else
            {
                dir = dir - 1;
            }
            g[x][y] = '#';
        }
        else if (g[x][y] == '#')
        {
            dir = dir + 1;
            g[x][y] = '.';
        }
        dir %= 4;
        x += dy[dir];
        if (x >= h)
        {
            x = 0;
        }
        if (x < 0)
        {
            x = h - 1;
        }
        y += dx[dir];
        if (y >= w)
        {
            y = 0;
        }
        if (y < 0)
        {
            y = w - 1;
        }
    }
    rep(i, 0, h)
    {
        rep(j, 0, w)
        {
            cout << g[i][j];
        }
        cout << endl;
    }
}