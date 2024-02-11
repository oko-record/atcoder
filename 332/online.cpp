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
    ll n, s, k, p, q, sum = 0;
    cin >> n >> s >> k;
    rep(i, 0, n)
    {
        cin >> p >> q;
        sum += p * q;
    }
    if (sum >= s)
    {
        cout << sum;
    }
    else
    {
        cout << sum + k;
    }
}