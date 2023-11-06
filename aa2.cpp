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

#define rep(i, m, n) for (ll i = m; i < n; i++)


int main()
{
    ll b, iter = 1;
    cin >> b;
    while (true)
    {
        ll tmp = pow(iter, iter);
        if (tmp > b)
        {
            cout << -1;
            return 0;
        }
        else if (tmp == b)
        {
            cout << iter;
            return 0;
        }
        iter ++;
    }
}