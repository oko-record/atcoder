#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, ans = 0;
    cin >> N;
    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }
    
    for (int i = 1; i <= N; i++) {
        if (i < 10) {
            // 1桁の月は必ずゾロ目の日がある
            ans++;
        }
        else if (i % 11 == 0 && i / 11 <= D[i-1]) {
            // 11, 22, ... 99のような月で、かつその月の日数が十分な場合にカウント
            ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
