#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool isValidSudoku(const vector<vector<int>>& A) {
    // 各行、列、ブロックのチェックに使用するセット配列
    vector<set<int>> rows(9), cols(9), blocks(9);

    for (int i = 0; i < 9; ++i) { // 行のループ
        for (int j = 0; j < 9; ++j) { // 列のループ
            int num = A[i][j];
            int blkIndex = (i / 3) * 3 + j / 3; // どのブロックに属するか計算

            // すでにその行、列、またはブロックに数字があれば、無効
            if (rows[i].count(num) || cols[j].count(num) || blocks[blkIndex].count(num))
                return false;

            // 数字をセットに追加
            rows[i].insert(num);
            cols[j].insert(num);
            blocks[blkIndex].insert(num);
        }
    }
    return true;
}

int main() {
    vector<vector<int>> A(9, vector<int>(9));

    // 入力を受け取る
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            cin >> A[i][j];

    // 判定と出力
    cout << (isValidSudoku(A) ? "Yes" : "No") << endl;

    return 0;
}
