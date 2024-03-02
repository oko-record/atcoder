#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    long long N, T;
    cin >> N >> T;

    vector<long long> scores(N, 0);
    map<long long, long long> score_counts;
    score_counts[0] = N;

    for(long long i = 0; i < T; ++i) {
        long long A, B;
        cin >> A >> B;
        --A; // 配列のインデックスは0から始まるため

        // 更新前の得点
        long long old_score = scores[A];
        // 新しい得点
        long long new_score = old_score + B;
        scores[A] = new_score;

        // 得点の種類数を更新
        --score_counts[old_score];
        if(score_counts[old_score] == 0) {
            score_counts.erase(old_score);
        }

        ++score_counts[new_score];

        // 現時点での得点の種類数を出力
        cout << score_counts.size() << endl;
    }

    return 0;
}
