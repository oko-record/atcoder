#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    long long P;
    cin >> N >> M >> P;

    vector<long long> A(N), B(M);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int j = 0; j < M; j++)
    {
        cin >> B[j];
    }

    //sort(A.rbegin(), A.rend()); // 昇順にソート
    sort(B.begin(), B.end());   // 降順にソート

    vector<long long> sums(M + 1);

    for (int i = 0; i < M; i++)
    {
        sums[i + 1] = sums[i] + B[i];
    }
    long long ans = 0;
    for (auto &x : A)
    {
        long long it = lower_bound(B.begin(), B.end(), P - x) - B.begin();
        ans += x * it;
        ans += sums[it];
        ans += P * (M - it);
    }
    cout << ans;
}
