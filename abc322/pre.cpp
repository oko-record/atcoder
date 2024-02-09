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

int n, m, cnt0 = 0, cnt1 = 0;
string s, t;

int main()
{
    cin >> n >> m >> s >> t;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            cnt0 += 1;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[m - n + i])
        {
            cnt1 += 1;
        }
        else
        {
            break;
        }
    }
    
    if (cnt0 == n && cnt1 == n)
    {
        cout << 0;
    }
    else if (cnt0 == n && cnt1 != n)
    {
        cout << 1;
    }
    else if (cnt0 != n && cnt1 == n)
    {
        cout << 2;
    }
    else if (cnt0 != n && cnt1 != n)
    {
        cout << 3;
    }
}