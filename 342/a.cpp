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
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    string s;
    int a = 1, b = 0, ansa = 0, ansb;
    char ca, cb;
    cin >> s;
    ca = s[0];
    rep(i, 1, s.size())
    {
        if (s[i] == s[0])
        {
            a++;
            ansa = i;
        }
        else
        {
            b++;
            cb = s[i];
            ansb = i;
        }
    }
    if (a >= b)
    {
        cout << ansb + 1;
    }
    else
    {
        cout << ansa + 1;
    }
}