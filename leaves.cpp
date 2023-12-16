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
using graph = map<int, int>;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n, in1, in2;
    cin >> n;
    vector<vector<int>> p(n);
    Graph g;
    rep(i, 0, n - 1)
    {
        cin >> in1 >> in2;
        g[in1] = in2;
        g[in2] = in1;
        p[in1].push_back(in2);
        p[in2].push_back(in1);
    }

}