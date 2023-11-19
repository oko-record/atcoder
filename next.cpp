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
    int n, max = 0, max2 = 0;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
        else if (a[i] < max && a[i] > max2)
        {
            max2 = a[i];
        }
    }
    cout << max2;
}