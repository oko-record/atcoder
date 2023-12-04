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

#define rep(i, m, n) for (int i = (m); i <= (n); i++)

int n, k, cr = 1, cnt = 0, len, ans = 0;
map<int, int> Map;
vector<int> a;

int main()
{
    cin >> n >> k;
    a.resize(n + 1);
    rep(i, 1, n) cin >> a[i];
    rep(i, 1, n)
    {
        while (cr <= n)
        {
            if (Map[a[cr]] == 0 and cnt == k)
                break;
            if (Map[a[cr]] == 0)
            {
                cnt++;
            }
            Map[a[cr]]++;
            cr++;
        }
        ans = max(ans, cr - i);
        if (Map[a[i]] == 1)
            cnt--;
        Map[a[i]]--;
    }

    cout << ans;
}