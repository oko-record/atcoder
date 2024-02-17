#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N;
    cin >> N;
    vector<long long> A(N), S(N-1), T(N-1);
    for (long long &a : A) cin >> a;
    for (long long i = 0; i < N-1; ++i) cin >> S[i] >> T[i];

    for (long long i = 0; i < N-1; ++i) {
        // 国iの通貨をSi単位以上持っている場合のみ処理
        if (A[i] >= S[i]) {
            long long exchange = (A[i] - S[i]) / S[i] * T[i] + T[i]; // 交換可能な最大単位を計算
            A[i] -= exchange / T[i] * S[i]; // 支払った国iの通貨を減算
            A[i+1] += exchange; // 獲得した国(i+1)の通貨を加算
        }
    }

    // 最終的に国Nの通貨の単位数を出力
    cout << A[N-1] << endl;
    return 0;
}
