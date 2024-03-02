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
    int a, b;
    bool f = false;
    cin >> a >> b;
    rep(i, 0, a + b + 1)
    {
        if (i != a + b)
        {
            cout << i;
            f = true;
            return 0;
        }
    }
    if (!f)
    {
        cout << 1;
    }
}
