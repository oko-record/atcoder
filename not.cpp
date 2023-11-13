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

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, x, s, a = 0;
    cin >> n >> x;
    rep(i, 0, n)
    {
        cin >> s;
        if (s <= x)
        {
            a += s;
        }
    }
    cout << a;
}