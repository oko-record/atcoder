#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (S[i][j] == 'o') {
                // 同じ行にある他の 'o' を探す
                for (int k = 0; k < N; ++k) {
                    if (k != j && S[i][k] == 'o') {
                        // 同じ列にある他の 'o' を探す
                        for (int l = 0; l < N; ++l) {
                            if (l != i && S[l][j] == 'o') {
                                ++count;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
