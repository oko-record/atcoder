#include <iostream>
#include <vector>

using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;

public:
    UnionFind(int size) : parent(size), rank(size, 0) {
        for (int i = 0; i < size; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] == x) {
            return x;
        } else {
            return parent[x] = find(parent[x]); // Path compression
        }
    }

    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return false;

        // Union by rank
        if (rank[x] < rank[y]) {
            parent[x] = y;
        } else {
            parent[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
        return true;
    }
};

bool isGoodSequence(int N, int M, vector<int>& A, vector<int>& B) {
    UnionFind uf(N + 1);  // N+1 because nodes are 1-indexed

    for (int i = 0; i < M; ++i) {
        if (!uf.unite(A[i], B[i])) {
            // Cannot unite A[i] and B[i], meaning we have A[i] == B[i] in some component
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    cout << (isGoodSequence(N, M, A, B) ? "Yes" : "No") << endl;

    return 0;
}
