#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int n, m;
vector<vector<int>> in, ans;

int main()
{
    cin >> n >> m;
    in.resize(m, vector<int>(4));
    ans.resize(n, vector<int>(2));
    for (auto &x : in)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    vector<int> ch1, ch2;

    for (auto &x : in)
    {
        if (x[0] == 1)
        {
            ans[x[1]][0] = x[2];
            ans[x[1]][1] = x[3];
            ch1.push_back(x[1]);
        }
    }

    ch2 = ch1;

    while ()
    for (auto &y : ch1)
    {
        for (auto &x : in)
        {
            if (x[0] == y)
            {
                if (find(ch2.begin(), ch2.end(), x[1]) == ch2.end())
                {
                    ans[x[1]][0] = x[2];
                    ans[x[1]][1] = x[3];
                }
            }
        }
    }
    ch1 = ch2;
}