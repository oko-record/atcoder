#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int m;
vector<string> s(3);

int main()
{
    cin >> m;
    rep(i, 3) cin >> s[i];

    int ans = INT_MAX;

    rep(i, 3 * m)
    {
        rep(j, 3 * m)
        {
            rep(k, 3 * m)
            {
                if (s[0][i % m] != s[1][j % m])
                    continue;
                if (s[0][i % m] != s[2][k % m])
                    continue;

                if (i == j) continue;
                if (i == k) continue;
                if (j == k) continue;

                ans = min(ans, max({i, j, k}));
            }
        }
    }
    if (ans == INT_MAX) cout << -1;
    else cout << ans;
}
