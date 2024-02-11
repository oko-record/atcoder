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

#define rep(i, m, n) for (ll i = m; i < n; i++)

string t2, s;
ll n, cnt = 0;

bool check(string s)
{
    if (t2.size() == s.size() + 1)
    {
        ll it = 0;
        bool flag = false;
        rep(i, 0, t2.size())
        {
            if (t2[i] != s[it])
            {
                if (flag)
                {
                    return false;
                }
                flag = true;
            }
            else
            {
                it++;
            }
        }
        return true;
    }
    else if (t2.size() + 1 == s.size())
    {
        ll it = 0;
        bool flag = false;
        rep(i, 0, s.size())
        {
            if (t2[it] != s[i])
            {
                if (flag)
                {
                    return false;
                }
                flag = true;
            }
            else
            {
                it++;
            }
        }
        return true;
    }
    else if (t2.size() == s.size())
    {
        bool flag = false;
        rep(i, 0, t2.size())
        {
            if (t2[i] != s[i])
            {
                if (flag)
                {
                    return false;
                }
                flag = true;
            }
        }
        return true;
    }
    return false;
}

int main()
{
    cin >> n >> t2;
    vector<int> ans;
    rep(i, 0, n)
    {
        cin >> s;
        if (check(s))
        {
            cnt ++;
            ans.push_back(i + 1);
        }
    }
    cout << cnt << endl;
    rep(i, 0, ans.size())
    {
        if (i)
        {
            cout << ' ';
        }
        cout << ans[i];
    }
}