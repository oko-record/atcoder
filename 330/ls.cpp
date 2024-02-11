#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
using ll = long long;

int main() {
    ll D;
    cin >> D;

    ll minDiff = LLONG_MAX; // 最小値を保持する変数を初期化
    for (ll x = 0; x*x <= D; ++x) {
        ll ySquared = D - x*x; // y^2 の値
        ll y = sqrt(ySquared); // y の値

        // 差の絶対値を計算
        ll diff = abs(x*x + y*y - D);

        // 別の y 値 (y+1) を試す
        if ((y+1)*(y+1) - ySquared < diff) {
            diff = abs(x*x + (y+1)*(y+1) - D);
        }
        

        // 最小差を更新
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
    return 0;
}
