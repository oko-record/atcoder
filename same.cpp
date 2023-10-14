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
    int n, a, b;
    cin >> n;
    bool flag = false;
    rep(i, 0, n)
    {
        cin >> a;
        if (flag)
        {
            if (a != b){
                cout << "No";
                return 0;
            }
        }
        flag = true;
        b = a;
    }
    cout << "Yes";
}