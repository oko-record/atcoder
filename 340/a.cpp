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
    int a, b, d;
    cin >> a >> b >> d;
    while (a <= b)
    {
        cout << a;
        if (a < b)
        {
            cout << ' ';
        }
        a += d;
    }
}
