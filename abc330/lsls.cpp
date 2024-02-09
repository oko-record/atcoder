#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countSegments(const string& line) {
    int count = 0;
    bool inSegment = false;

    for (char ch : line) {
        if (ch == 'o') {
            if (!inSegment) {
                inSegment = true;
                count++;
            }
        } else {
            inSegment = false;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;
    vector<string> grid(N);
    vector<int> rowCount(N, 0), colCount(N, 0);

    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
        rowCount[i] = countSegments(grid[i]);
    }

    for (int j = 0; j < N; ++j) {
        string col;
        for (int i = 0; i < N; ++i) {
            col.push_back(grid[i][j]);
        }
        colCount[j] = countSegments(col);
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (grid[i][j] == 'o') {
                // 各セグメント内のoから他の2つのoを選ぶ組み合わせ数をカウント
                count += (rowCount[i] - 1) * (colCount[j] - 1);
            }
        }
    }

    cout << count << endl;
    return 0;
}
