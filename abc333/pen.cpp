#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    char s1, s2, t1, t2;
    cin >> s1 >> s2;
    cin >> t1 >> t2;
    int dist_s = 0, dist_t = 0;

    if (abs(int(s1) - int(s2)) > 2)
    {
        dist_s = 5 - abs(int(s1) - int(s2));
    }
    if (abs(int(t1) - int(t2)) > 2)
    {
        dist_t = 5 - abs(int(t1) - int(t2));
    }
    if (dist_s == dist_t)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}