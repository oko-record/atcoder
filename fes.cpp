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

ll n, m;
vector<ll> a, ans;

int main()
{
    cin >> n >> m;
    a.resize(m);
    ans.resize(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    for (ll i = 1; i <= n; i++)
    {
        ll left = -1, right = m;
        while (right - left > 1)
        {
            ll mid = (left + right) / 2;
            if (i == a[mid])
            {
                ans[i - 1] = a[mid] - i;
                break;
            }
            else if (i < a[mid])
            {
                right = mid;
            } 
            else if (i > a[mid])
            {
                left = mid;
            }
        }
    }
    for (auto &x : ans)
    {
        cout << x << endl;
    }
}