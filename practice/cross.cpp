#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int n = min(h, w);
    vector<int> ans(n + 1);
    vector<string> g(h);
    for (auto& x : g) cin >> x;

    auto ok = [&](int i, int j) { return 0 <= i and i < h and 0 <= j and j < w; };
    auto test = [&](int i, int j, int d)
    {
        for (auto& x : vector{+d, -d})
        {
            for (auto& y : vector{+d, -d})
            {
                int s = i + x, t = j + y;
                if (!ok(s, t) or g[s][t] != '#') return false;
            }
        }
        return true;
    };
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (g[i][j] != '#') continue;
            if (test(i, j, 1))
            {
                int d = 1;
                while (test(i, j, d + 1)) d++;
                ans[d]++;
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << " \n"[i == n];

    return 0;
}