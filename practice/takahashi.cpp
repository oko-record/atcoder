#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < n; i++)
#define rep_v(v) for (auto &x : v)

using namespace std;

int glad(vector<vector<long long int>> &a, vector<pair<int,int>> &b, int h, int w, int hx, int hy, int count)
{
    vector<int> bb;
    rep_v(b) bb.push_back(x);
    // cout << hx << hy << endl;

    if (hx == h - 1 && hy == w - 1)
        return count + 1;
    else
    {
        if (hx < h - 1 && b[a[hx + 1][hy]] == 0)
        {
            b[a[hx + 1][hy]]++;
            count = glad(a, b, h, w, hx + 1, hy, count);
        }
        // cout << hx << hy << endl;
        if (hy < w - 1 && bb[a[hx][hy + 1]] == 0)
        {
            b[a[hx][hy + 1]]++;
            count = glad(a, bb, h, w, hx, hy + 1, count);
        }
        return count;
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<long long int>> a(h, vector<long long int>(w));
    vector<pair<int, int>> b;
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> a[i][j];
            b.push_back({a[i][j], 0});
        }
    }

    b[a[0][0]]++;

    int ans = glad(a, b, h, w, 0, 0, 0);

    cout << ans << endl;
}