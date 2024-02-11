#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int H, W, K;
vector<string> grid;

int minOperationsToFormK(int i, int j) {
    int needed = K;

    // 横方向のチェック
    for (int k = 0; k < K && j + k < W; ++k) {
        if (grid[i][j + k] == 'o') needed--;
    }

    // 縦方向のチェック
    for (int k = 0; k < K && i + k < H; ++k) {
        if (grid[i + k][j] == 'o') needed--;
    }

    return needed;
}

int main() {
    cin >> H >> W >> K;
    grid.resize(H);
    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    int minOps = INT_MAX;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] != 'x') {
                minOps = min(minOps, minOperationsToFormK(i, j));
            }
        }
    }

    cout << (minOps == INT_MAX ? -1 : minOps) << endl;
    return 0;
}
