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
    cin >> s;
    bool af = false, bf = false, cf = false, aa = false, bb = false, cc = false;
    rep(i, 0, s.size())
    {
        if (!aa && s[i] == 'A')
        {
            aa = true;
        }
        else if (!bb && s[i] == 'B')
        {
            bb = true;
            af = true;
        }
        else if (!cc && s[i] == 'C')
        {
            cc = true;
            af = true;
            bf = true;
        }
        else if (af && s[i] == 'A')
        {
            cout << "No";
            return 0;
        }
        else if (bf && s[i] == 'B')
        {
            cout << "No";
            return 0;
        }
        else if (cf && s[i] == 'C')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;

}