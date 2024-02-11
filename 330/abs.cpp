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

#define rep(i, m, n) for (ll i = (m); i < (n); i++)

ll n, l, r;
vector<int> a, b;

int main()
{
    cin >> n >> l >> r;
    a.resize(n);
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] < l)
        {
            b.push_back(l);
        }
        else if (l <= a[i] && a[i] <= r)
        {
            b.push_back(a[i]);
        }
        else if (r < a[i])
        {
            b.push_back(r);
        }
        
    }
    rep(i, 0, n)
    {
        if (i)
        {
            cout << ' ';
        }
        cout << b[i];
    }
}