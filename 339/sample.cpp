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
    string s;
    int ind;
    cin >> s;
    rep(i, 0, s.size())
    {
        if (s[i] == '.')
        {
            ind = i;
        }
    }
    rep(j, ind + 1, s.size())
    {
        cout << s[j];
    }

}