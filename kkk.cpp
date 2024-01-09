#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // グリッドのサイズ
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // 上の行を左から右へ
        for (int i = left; i <= right; i++) {
            grid[top][i] = num++;
        }
        top++;

        // 右の列を上から下へ
        for (int i = top; i <= bottom; i++) {
            grid[i][right] = num++;
        }
        right--;

        // 下の行を右から左へ
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                grid[bottom][i] = num++;
            }
            bottom--;
        }

        // 左の列を下から上へ
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                grid[i][left] = num++;
            }
            left++;
        }
    }

    // グリッドの出力
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == n * n) { // 20 の場合 'T' に置換
                cout << 'T' << " ";
            } else {
                cout << grid[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
