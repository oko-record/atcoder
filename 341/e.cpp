#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 部分文字列が良い文字列かどうかを判定する関数
bool isGoodSubstring(const string& S, const vector<int>& flip, int L, int R) {
    bool currentFlip = false; // 現在地点での反転状態
    for (int i = L; i < R; ++i) {
        if (flip[i] != flip[i + 1]) currentFlip = !currentFlip; // 反転状態の更新
        if (currentFlip) {
            // 反転している場合、S[i] と S[i + 1] が同じであれば良い文字列ではない
            if (S[i] == S[i + 1]) return false;
        } else {
            // 反転していない場合、S[i] と S[i + 1] が異なれば良い文字列ではない
            if (S[i] != S[i + 1]) return false;
        }
    }
    return true; // すべてのチェックを通過した場合、良い文字列である
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    vector<int> flip(N + 1, 0); // 反転操作を記録する差分配列

    while (Q--) {
        int type, L, R;
        cin >> type >> L >> R;

        if (type == 1) {
            // 反転クエリ: 差分配列を更新
            flip[L - 1] ^= 1;
            flip[R] ^= 1;
        } else {
            // 良い文字列かどうかの判定クエリ
            cout << (isGoodSubstring(S, flip, L - 1, R - 1) ? "Yes" : "No") << '\n';
        }
    }

    return 0;
}
