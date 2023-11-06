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

#define rep(i, m, n) for (int i = m; i < n; i++)



int main()
{
    int n;
    cin >> n;

    rep(i, n, INT_MAX)
    {
        if ((i / 100) * ((i / 10) % 10) == i % 10)
        {
            cout << i;
            return 0;
        }
    }
}