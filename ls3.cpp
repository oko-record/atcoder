#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<string> grid(N);
    vector<ll> row_count(N, 0), col_count(N, 0);

    // グリッドと各行、各列の'o'の数を読み込む
    for (ll i = 0; i < N; ++i) {
        cin >> grid[i];
        for (ll j = 0; j < N; ++j) {
            if (grid[i][j] == 'o') {
                row_count[i]++;
                col_count[j]++;
            }
        }
    }

    ll count = 0;
    
    for (ll i = 0; i < N; ++i) {
        for (ll j = 0; j < N; ++j) {
            if (grid[i][j] == 'o') {
                // 同じ行または列に他の'o'が少なくとも2つある場合、条件を満たす
                if (row_count[i] >= 2 && col_count[j] >= 2) {
                    count += (row_count[i] - 1) * (col_count[j] - 1);
                }
            }
        }
    }
    


    cout << count << endl;
    return 0;
}
