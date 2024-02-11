#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, w;
};

int N, M, K;
vector<Edge> edges;

// ある頂点集合が全域木を形成しているかどうかをチェックする関数
bool isSpanningTree(vector<Edge>& treeEdges) {
    // （実装詳細）
}

// 全域木の重みの総和を計算する関数
int calculateWeight(vector<Edge>& treeEdges) {
    int totalWeight = 0;
    for (const Edge& e : treeEdges) {
        totalWeight += e.w;
    }
    return totalWeight % K;
}

int main() {
    cin >> N >> M >> K;
    edges.resize(M);
    for (int i = 0; i < M; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int minCost = K; // コストの最小値はK未満でなければならない
    // 全ての辺の組み合わせについて全域木のコストを計算する
    for (int i = 0; i < (1 << M); ++i) {
        vector<Edge> treeEdges;
        for (int j = 0; j < M; ++j) {
            if (i & (1 << j)) {
                treeEdges.push_back(edges[j]);
            }
        }
        if (isSpanningTree(treeEdges)) {
            minCost = min(minCost, calculateWeight(treeEdges));
        }
    }

    cout << minCost << endl;

    return 0;
}
