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
    int n;
    string s;
    cin >> n >> s;
    rep(i, 0, n)
    {
        if (s[i] == 'a')
        {
            if (s[i + 1] == 'b')
            {
                cout << "Yes";
                return 0;
            }
        }
        else if (s[i] == 'b')
        {
            if (s[i + 1] == 'a')
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}