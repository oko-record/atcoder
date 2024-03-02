#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <cstdlib>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, tmp_a;
    cin >> n;
    vector<vector<int>> a(n);
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cin >> tmp_a;
            a[i].emplace_back(tmp_a);
        }
    }

    rep(i, 0, n)
    {
        vector<int> t;
        rep(j, 0, a[i].size())
        {
            if (a[i][j])
            {
                t.emplace_back(j + 1);
            }
        }
        sort(t.begin(), t.end());
        rep(j, 0, t.size())
        {
            if (j)
            {
                cout << ' ';
            }
            cout << t[j];
        }
        cout << endl;
    }
}