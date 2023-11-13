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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, d, ans = 0;
    cin >> n;
    vector<int> m = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99};
    rep(i, 0, n)
    {
        cin >> d;
        if (find(m.begin(), m.end(), i + 1) == m.end()) continue;
        if (i + 1 > 10)
        {
            if (d >= (i + 1) % 10)
            {
                ans ++;
            }
        }
        if (d >= (i + 1) * 10 + i + 1)
        {
            ans += 2;
        }
        else if (d >= i + 1)
        {
            ans += 1;
        }
    }
    cout << ans;
}