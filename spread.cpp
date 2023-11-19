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

string s;

int main()
{
    cin >> s;
    rep(i, 0, s.size())
    {
        if (i)
        {
            cout << ' ';
        }
        cout << s[i];
    }
}