#include <iostream>
#include <vector>

using namespace std;

long long findMaxPrintableGoods(int N, vector<pair<long long, long long>>& goods) {
    long long maxPrintable = 0;
    long long currentTime = 0;  // 現在の時間

    for (int i = 0; i < N; i++) {
        long long T = goods[i].first;
        long long D = goods[i].second;

        // 商品が印刷機の範囲に入る時間
        long long enteringTime = currentTime + T;

        // 商品が印刷機の範囲から出る時間
        long long exitingTime = enteringTime + D;

        // 商品が印刷機の範囲に入る前に印刷できる場合
        if (enteringTime > currentTime) {
            currentTime = enteringTime;
        } else {
            // チャージ時間を経て印刷
            currentTime += 1;
        }

        // 印刷機の範囲内に商品がある場合
        if (currentTime <= exitingTime) {
            maxPrintable += 1;
            currentTime += 1;  // チャージ時間を経て印刷
        }
    }

    return maxPrintable;
}

int main() {
    int N;
    cin >> N;
    vector<pair<long long, long long>> goods(N);

    for (int i = 0; i < N; i++) {
        long long T, D;
        cin >> T >> D;
        goods[i] = make_pair(T, D);
    }

    long long result = findMaxPrintableGoods(N, goods);
    cout << result << endl;

    return 0;
}
