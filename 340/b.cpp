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
    int q, q_x, q_y;
    cin >> q;
    vector<int> a;
    rep(i, 0, q)
    {
        cin >> q_x >> q_y;
        if (q_x == 1)
        {
            a.emplace_back(q_y);
        }
        else
        {
            int index = a.size() - q_y;
            cout << a[index] << endl;
        }
    }
}