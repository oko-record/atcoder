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
    bool flag = true;

    rep(i, 0, s.size())
    {
        if (s[i] == 'A')
        {
            if (s[i + 1] == 'B')
            {
                if (s[i + 2] == 'C')
                {
                    s.erase(i, 3);
                    i -= 3;
                    i = max(-1, i);
                }
            }
        }
    }

    cout << s;
}