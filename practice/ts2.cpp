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
    int n, m, ans = 0;
    string s;
    cin >> n >> m >> s;
    s += '0';
    string now = "";

    auto solve = [&](string s, int m)
    {
        int one = 0, two = 0;
        for (char c : s)
        {
            if (c == '1') one++; else two++;
        }
        return (one + two) - min(m, one);
    };


    for (char c : s)
    {
        if (c == '0')
        {
            ans = max(ans, solve(now, m));
            now = "";
        }
        else
        {
            now += c;
        }
    }
    cout << ans;
    return 0;
}