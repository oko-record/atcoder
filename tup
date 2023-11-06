#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBipartite(int start, vector<vector<int>>& graph, vector<int>& color) {
    queue<int> q;
    q.push(start);
    color[start] = 1;  // 開始ノードを色1で塗る

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int adj : graph[node]) {
            if (color[adj] == -1) {  // 未訪問なら反対の色を塗る
                color[adj] = 1 - color[node];
                q.push(adj);
            } else if (color[adj] == color[node]) {
                return false;  // 同じ色が隣接しているので二部グラフではない
            }
        }
    }
    return true;
}

bool checkGoodSequencePair(int N, int M, vector<int>& A, vector<int>& B) {
    vector<vector<int>> graph(N + 1);
    vector<int> color(N + 1, -1);  // -1は未訪問を意味する

    // グラフの構築
    for (int i = 0; i < M; ++i) {
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }

    // 各連結成分についてチェック
    for (int i = 1; i <= N; ++i) {
        if (color[i] == -1 && !isBipartite(i, graph, color)) {
            return false;  // 二部グラフでない連結成分が見つかった
        }
    }

    return true;  // すべての連結成分が二部グラフ
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i] >> B[i];
    }

    cout << (checkGoodSequencePair(N, M, A, B) ? "Yes" : "No") << endl;

    return 0;
}
