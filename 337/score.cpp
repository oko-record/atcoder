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
    int n, x, y, sumx = 0, sumy = 0;
    cin >> n;
    rep(i, 0, n)
    {
        cin >> x;
        cin >> y;
        sumx += x;
        sumy += y;
    }
    if (sumx > sumy)
    {
        cout << "Takahashi";
    }
    else if (sumx < sumy)
    {
        cout << "Aoki";
    }
    else if (sumx == sumy)
    {
        cout << "Draw";
    }
}