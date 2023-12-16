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
    int n;
    string one = "1";
    vector<ll> ones, anss;
    set<ll> ans;
    cin >> n;
    rep(i, 0, 12)
    {
        ones.push_back(stoll(one));
        one += "1";
    }
    rep(i, 0, 12)rep(j, 0, 12)rep(k, 0, 12)ans.insert(ones[i] + ones[j] + ones[k]);
    for (ll ele : ans)
    {
        anss.push_back(ele);
    }
    sort(anss.begin(), anss.end());

    cout << anss[n-1];
}