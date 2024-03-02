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
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, q, a, b;
    cin >> n;
    vector<int> p(n), pp(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n)
    {
        pp[p[i] - 1] = i;
    }
    cin >> q;
    rep(i, 0, q)
    {
        cin >> a >> b;
        if (pp[a - 1] <= pp[b - 1])
            cout << a << endl;
        else cout << b << endl;
    }
}