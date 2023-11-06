#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 深さ優先探索でグラフが二部グラフかどうか判定する関数
bool dfs(int v, vector<vector<int>>& g, vector<int>& color, int c) {
    color[v] = c; // 頂点vを色cで塗る
    for (int u : g[v]) {
        // 隣接している頂点が同じ色だった場合はfalseを返す
        if (color[u] == c) return false;
        // 隣接している頂点が未訪問の場合は、反対の色を塗る
        if (color[u] == 0 && !dfs(u, g, color, -c)) return false;
    }
    // すべての隣接頂点を塗れたらtrueを返す
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> g(N + 1);
    vector<int> color(N + 1, 0); // 色を管理する配列。1または-1で色分けする。0は未訪問を表す。

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        g[A].push_back(B); // 頂点Aから頂点Bへのエッジを追加
        g[B].push_back(A); // 頂点Bから頂点Aへのエッジを追加（無向グラフなので）
    }

    // すべての連結成分についてチェックする
    for (int i = 1; i <= N; i++) {
        if (color[i] == 0) { // 未訪問の頂点の場合
            if (!dfs(i, g, color, 1)) { // 深さ優先探索を行い、二部グラフではない場合
                cout << "No" << endl;
                return 0;
            }
        }
    }
    // すべての連結成分が二部グラフである場合
    cout << "Yes" << endl;
    return 0;
}
