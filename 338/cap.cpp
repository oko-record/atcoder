#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <cctype>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    string s;
    cin >> s;
    if (isupper(s[0]))
    {
        rep(i, 1, s.size())
        {
            if (isupper(s[i]))
            {
                cout << "No";
                return 0;
            }
        }
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}