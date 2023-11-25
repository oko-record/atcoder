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
    int n, l, cnt = 0;
    cin >> n >> l;
    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] >= l)
        {
            cnt++;
        }
    }
    cout << cnt;
}