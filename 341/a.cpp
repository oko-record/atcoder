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
    int n, num = 1;
    cin >> n;
    rep(i, 0, n * 2 + 1)
    {
        cout << num;
        num = 1 - num;
    }
}
