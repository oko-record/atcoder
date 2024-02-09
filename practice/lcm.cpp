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
    ll a, b;
    cin >> a >> b;

    auto gcd = [&](auto gcd, ll a, ll b) -> ll
    {
        if (b == 0)
            return a;
        else
            return gcd(gcd, b, a % b);
    };

    ll lim = 1e18;
    ll tmp_ans = b / gcd(gcd, a, b);

    if (tmp_ans > lim / a)
    {
        cout << "Large";
    }
    else
    {
        cout << a * tmp_ans;
    }
}