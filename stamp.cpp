#include <iostream>
#include <string>
using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)


int main()
{
    int N, M;
    string S, T;
    cin >> N >> M >> S >> T;
    int diff = N - M;
    string X(N, '#');

    auto dfs = [&](auto dfs, int i) -> bool
    {
        for (int j = 0; j < M; ++j)
        {
            X[i + j] = T[j];
        }
        if (X == S)
        {
            cout << "Yes";
            return true;
        }
        rep(k, 0, diff)
        {
            if (dfs(dfs, k))
            {
                return true;
            }
        }
        return false;
    };
    dfs(dfs, 0);
}
