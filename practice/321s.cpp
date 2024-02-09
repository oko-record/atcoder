#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
using namespace std;

int k;

int main()
{
    cin >> k;
    vector<long long> ans;

    // 全探索
    for (int i = 2; i < (1 << 10); i++)
    {
        long long x = 0;
        for (int j = 9; j >= 0; j--)
        {
            if (i & (1 << j))
            {
                x *= 10;
                x += j;
            }
        }
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans[k - 1];

}