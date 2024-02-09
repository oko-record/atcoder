#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
string R, C;
vector<vector<char>> board;

bool check(int x, int y, char ch) {
    for (int i = 0; i < N; ++i) {
        if (board[x][i] == ch || board[i][y] == ch) return false;
    }
    return true;
}

bool solve(int x, int y) {
    if (x == N) return true;
    if (y == N) return solve(x + 1, 0);
    if (board[x][y] != '.') return solve(x, y + 1);

    for (char ch : {'A', 'B', 'C'}) {
        if (check(x, y, ch)) {
            board[x][y] = ch;
            if (solve(x, y + 1)) return true;
            board[x][y] = '.';
        }
    }
    return false;
}

int main() {
    cin >> N >> R >> C;

    board.assign(N, vector<char>(N, '.'));

    for (int i = 0; i < N; ++i) {
        board[i][0] = R[i];
        board[0][i] = C[i];
    }

    if (solve(0, 0)) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << board[i][j];
            }
            cout << "\n";
        }
    } else {
        cout << "-1\n";
    }

    return 0;
}
