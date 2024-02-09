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
    vector<int> per{0, 1, 2};
    vector<int> ans_list(3);

    int ans = INT_MAX;

    rep(i, 10)
    {
        char slot = '0' + i;
        do
        {
            int t = -1;
            rep(p, 3)
            {
                t++;
                while (t < 300 && s[per[p]][t % m] != slot)
                    t++;
            }
            if (t < 300) ans = min(ans,t);
        } while (next_permutation(per.begin(), per.end()));
    }

    if (ans == INT_MAX)
        cout << -1;
    else
        cout << ans;
}
