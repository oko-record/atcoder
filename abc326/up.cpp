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
    int x, y;
    cin >> x >> y;
    if (y - x >= -3 && y - x <= 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}