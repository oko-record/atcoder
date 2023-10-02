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

ll n, m, in = 0;
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
        if (i == a[in])
        {
            cout << 0 << endl;
            in ++;
        }
        else
        {
            cout << a[in] - i << endl;
        }
    }

}
