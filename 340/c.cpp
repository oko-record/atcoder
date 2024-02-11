#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <cstdlib>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    ll n, sum_x = 0;
    cin >> n;
    map<ll, ll> m;

    auto f = [&](auto f, ll num) -> ll
    {
        if (num == 1)
            return 0;
        if (m.count(num))
            return m[num]; 
        return m[num] = f(f, num / 2) + f(f, (num + 1) / 2) + num;
    };

    // auto dfs = [&](auto dfs, int current) -> void
    // {
    //     if (current > 1)
    //     {
    //         sum_x += current;
    //         dfs(dfs, current / 2);
    //         if (current % 2 == 0)
    //             dfs(dfs, current / 2);
    //         else
    //             dfs(dfs, current / 2 + 1);
    //     }
    // };

    // dfs(dfs, n);
    cout << f(f, n);
}