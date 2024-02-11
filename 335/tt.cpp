#include <iostream>
#include <vector>
#include <deque>

using namespace std;
using ll = long long;

int main() {
    ll n, q;
    cin >> n >> q;

    pair<ll, ll> head = {1, 0}; // 頭の初期位置
    deque<pair<ll, ll>> positions; // 位置の履歴

    for (int i = 0; i < q; ++i) {
        ll type;
        cin >> type;
        if (type == 1) {
            char dir;
            cin >> dir;
            // 頭の位置を更新
            if (dir == 'R') head.first++;
            else if (dir == 'L') head.first--;
            else if (dir == 'U') head.second++;
            else if (dir == 'D') head.second--;
            
            // 位置の履歴を更新
            positions.push_front(head);
            if (positions.size() > n) positions.pop_back();
        } else if (type == 2) {
            ll p;
            cin >> p;
            p--; // 0-indexed に変換
            if (p < positions.size()) {
                cout << positions[p].first << ' ' << positions[p].second << endl;
            } else {
                cout << "1 " << -p << endl; // デフォルトの位置
            }
        }
    }

    return 0;
}
