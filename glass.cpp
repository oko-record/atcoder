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
    int k, g, m, cg = 0, cm = 0;
    cin >> k >> g >> m;
    rep(i, 0, k)
    {
        if (cg == g)
        {
            cg = 0;
        }
        else if (cm == 0)
        {
            cm = m;
        }
        else
        {
            if (cm >= g - cg)
            {
                cm = cm - g + cg;
                cg = g;
            }
            else
            {
                cg += cm;
                cm = 0;
            }
        }
    }
    cout << cg << ' ' << cm;
}