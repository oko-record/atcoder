#include <iostream>
#include <numeric> // std::gcdを使用するために必要
using namespace std;

// 最小公倍数(LCM)を求める関数
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

// 条件を満たす数の個数を計算する関数
long long count(long long x, long long N, long long M) {
    // N または M で割り切れ、両方で割り切れない数の個数
    return x / N + x / M - 2 * (x / lcm(N, M));
}

int main() {
    long long N, M, K;
    cin >> N >> M >> K;

    long long left = 1, right = 2 * K * max(N, M); // 探索範囲の設定
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (count(mid, N, M) < K) left = mid + 1;
        else right = mid;
    }

    cout << left << endl; // 答えの出力
    return 0;
}
