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
    int k;
    cin >> k;
    if (k % 9 != 0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        vector<int> dp(k + 1);
        dp[0] = 1;
        rep(i, 1, k + 1)
        {
            for (int j = i - 1; j >= 0 and j >= i - 9; j--)
            {
                dp[i] += dp[j];
                if (dp[i] >= 1000000007) dp[i] -= 1000000007;
            }
        }
        cout << dp[k];
    }
    
}