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
    ll n, tmp;
    cin >> n;
    map<ll, ll> map1;
    rep(i, 0, n)
    {
        cin >> tmp;
        map1[tmp] = i + 1;
    }
    ll j = -1;
    rep(i, 0, n)
    {
        if (i)
        {
            cout << ' ';
        }
        cout << map1[j];
        j = map1[j];
    }
}