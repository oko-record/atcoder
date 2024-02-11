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
    int n, mina = INT_MAX, minb = INT_MAX, tmpMin = 0;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i, 0, n)
    {
        cin >> q[i];
    }
    rep(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            continue;
        }
        else if (q[i] / a[i] < mina)
        {
            mina = q[i] / a[i];
        }
    }
    rep(i, 0, n)
    {
        cin >> b[i];
        if (b[i] == 0)
        {
            continue;
        }
        else if (q[i] / b[i] < minb)
        {
            minb = q[i] / b[i];
        }
    }

    rep(i, 0, mina + 1)
    {
        int tmpMax = INT_MAX;
        rep(j, 0, n)
        {
            if (b[j] == 0)
            {
            }
            else
            {
                int tmp = (q[j] - a[j] * i) / b[j] + i;
                if (tmp < tmpMax)
                {
                    tmpMax = tmp;
                }
            }
        }
        if (tmpMin < tmpMax)
        {
            tmpMin = tmpMax;
        }
    }
    cout << tmpMin;
}