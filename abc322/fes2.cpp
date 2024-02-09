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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == a[j])
            {
                ans[i - 1] = 0;
                break;
            }
            else if (i < a[j])
            {
                ans[i - 1] = a[j] - i;
                break;
            }
        }
    }

    for (auto &x : ans)
    {
        cout << x << endl;
    }
}