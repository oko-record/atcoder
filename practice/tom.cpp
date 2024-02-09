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
    int M, D, y , m , d;
    cin >> M >> D >> y >> m >> d;

    if (d == D)
    {
        if (m == M)
        {
            cout << y + 1 << ' ' << 1 << ' '<< 1;
        }
        else 
        {
            cout << y << ' ' << m + 1 << ' ' << 1;
        }
    }
    else
    {
        cout << y << ' ' << m << ' ' << d + 1;
    }
}