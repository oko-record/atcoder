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
    ll n;
    cin >> n;
    while (true)
    {
        if (n == 1)
        {
            cout << "Yes";
            return 0;
        }
        else if (n % 2 != 0)
        {
            if (n % 3 != 0)
            {
                cout << "No";
                return 0;
            }
            else
            {
                n /= 3;
            }
        }
        else
        {
            n /= 2;
        }
    }
}