#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n = 3, m = 4;
  vector p(n, vector<string>(m));
  rep(i,n)rep(j,m) cin >> p[i][j];

  vector<vector<vector<string>>> s(n);
  rep(pi,n) {
    rep(ri,4) {
      for (int di = -m; di < m; di++) {
        for (int dj = -m; dj < m; dj++) {
          vector np(m, string(m,'.'));
          bool ok = true;
          rep(i,m)rep(j,m) {
            if (p[pi][i][j] == '.') continue;
            int ni = i+di, nj = j+dj;
            if (ni < 0 || nj < 0 || ni >= m || nj >= m) {
              ok = false;
              continue;
            }
            np[ni][nj] = '#';
          }
          if (!ok) continue;
          s[pi].push_back(np);
        }
      }

      {
        auto pre = p[pi];
        rep(i,m)rep(j,m) {
          p[pi][i][j] = pre[m-1-j][i];
        }
      }
    }
  }

  for (auto p0 : s[0]) {
    for (auto p1 : s[1]) {
      for (auto p2 : s[2]) {
        vector cnt(m, vector<int>(m));
        auto put = [&](vector<string> p) {
          rep(i,m)rep(j,m) {
            if (p[i][j] == '#') cnt[i][j]++;
          }
        };
        put(p0);
        put(p1);
        put(p2);
        if (cnt == vector(m,vector<int>(m,1))) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}