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
    int h, w, rs, cs, rt, ct, cnt = 0;
    cin >> h >> w >> rs >> cs >> rt >> ct;
    vector<string> s(h);
    const vector<int> dx = {1, 0, -1, 0};
    const vector<int> dy = {0, 1, 0, -1};

    rep(i, 0, h)
    {
        cin >> s[i];
    }

    

}