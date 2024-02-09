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
    int h, w;
    vector<vector<int>> led;
    cin >> h >> w;

    if (h == 1 or w == 1)
        cout << h * w;
    else
        cout << ((h + 1) / 2) * ((w + 1) / 2);
}