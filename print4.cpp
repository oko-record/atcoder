#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <queue>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll,ll>;

int main() {
  int n;
  cin >> n;
  vector<P> a(n);
  rep(i,n) {
    ll t, d;
    cin >> t >> d;
    a[i] = P(t,t+d);
  }
  sort(a.begin(), a.end());

  int ans = 0;
  ll t = 0;
  int ai = 0;
  priority_queue<ll,vector<ll>,greater<ll>> q;
  while (ai < n || !q.empty()) {
    while (ai < n && a[ai].first <= t) {
      q.push(a[ai].second);
      ai++;
    }
    while (!q.empty() && q.top() < t) q.pop();
    if (!q.empty()) ans++, q.pop();
    if (q.empty() && ai < n) t = a[ai].first;
    else t++;
  }
  cout << ans << endl;
  return 0;
}