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
    for (int i = 0; i < n; i++)
    {
        ch2.push_back(i);
    }

    for (auto &x : in)
    {
        if (x[0] == 1)
        {
            ans[x[1]][0] = x[2];
            ans[x[1]][1] = x[3];
            ch1.push_back(x[1]);
            ch2.erase(remove(ch2.begin(), ch2.end(), 2), ch2.end());
        }
    }

    for (auto &y : ch1)
    {
        for (auto &x : in)
        {
            if (x[0] == y)
            {
                if (x[1] )
            }
        }