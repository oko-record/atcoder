#include <vector>

class UnionFind {
public:
    std::vector<int> parent;

    UnionFind(int n) : parent(n) {
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            return parent[x] = find(parent[x]);
        }
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x != y) {
            parent[x] = y;
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

// 使用例
int main() {
    UnionFind uf(10); // 10 要素の Union-Find を作成

    uf.unite(2, 3); // 要素 2 と 3 を結合
    uf.unite(3, 4); // 要素 3 と 4 を結合

    bool result = uf.same(2, 4); // true を返す（2 と 4 は同じ集合に属している）
    return 0;
}
