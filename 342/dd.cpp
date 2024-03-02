#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int MAX_N = 200000;

// エラトステネスの篩を用いて、最小の素因数を求める
vector<int> sieve(int n) {
    vector<int> minPrime(n + 1, 0);
    for (int i = 2; i <= n; ++i) minPrime[i] = i;
    for (int i = 2; i * i <= n; ++i) {
        if (minPrime[i] == i) {
            for (int j = i * i; j <= n; j += i)
                if (minPrime[j] == j) minPrime[j] = i;
        }
    }
    return minPrime;
}

// 素因数分解して、素因数の指数の偶奇のビットマスクを返す
int factorize(int x, const vector<int>& minPrime) {
    int mask = 0;
    while (x > 1) {
        int p = minPrime[x];
        int count = 0;
        while (x % p == 0) {
            x /= p;
            count++;
        }
        if (count % 2) mask ^= (1 << (p % 30)); // 30は適当な数で、衝突を避けるため
    }
    return mask;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int& a : A) cin >> a;

    auto minPrime = sieve(MAX_N);
    map<int, int> maskCount; // 各ビットマスクの出現回数をカウント

    for (int a : A) {
        int mask = factorize(a, minPrime);
        maskCount[mask]++;
    }

    long long ans = 0;
    for (auto& [mask, count] : maskCount) {
        ans += static_cast<long long>(count) * (count - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}
