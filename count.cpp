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

int n;
string s, tmp;
char c;
set<string> ss;

int main()
{
    cin >> n >> s;
    rep(i, 0, n)
    {
        if (c != s[i])
        {
            c = s[i];
            tmp = c;
            ss.insert(tmp);
        }
        else if (c == s[i])
        {
            tmp += c;
            ss.insert(tmp);
        }
    }
    cout << ss.size();
}