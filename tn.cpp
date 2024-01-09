#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n;
    cin >> n;
    rep(x, 0, n + 1)
    {
        rep(y, 0, n + 1)
        {
            rep(z, 0, n + 1)
            {
                if (x + y + z <= n)
                {
                    cout << x << ' ' << y << ' ' << z << endl;
                }
                else break;
            }
        }
    }
}