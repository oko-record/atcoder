#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

// 文字列を繰り返してレピュニットを生成する関数
long long make_repunit(int length) {
    std::string repunit(length, '1');
    return std::stoll(repunit);
}

// N番目のレピュニットの和を見つける関数
long long find_nth_repunit_sum(int n) {
    std::set<long long> sums;
    for (int i = 1; i <= 10; ++i) {
        for (int j = i + 1; j <= 10; ++j) {
            for (int k = j + 1; k <= 10; ++k) {
                sums.insert(make_repunit(i) + make_repunit(j) + make_repunit(k));
            }
        }
    }

    // セットからベクトルにコピーしてソート
    std::vector<long long> sorted_sums(sums.begin(), sums.end());
    std::sort(sorted_sums.begin(), sorted_sums.end());

    // N番目の要素を返す
    return sorted_sums[n - 1];
}

int main() {
    int N;
    std::cout << "N を入力してください: ";
    std::cin >> N;

    std::cout << "N 番目のレピュニットの和: " << find_nth_repunit_sum(N) << std::endl;
    return 0;
}
