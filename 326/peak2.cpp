#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    vector<long long> A(N);
    for (long long i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long maxPresents = 0;
    for (long long i = 0; i < N; ++i) {
        long long count = upper_bound(A.begin(), A.end(), A[i] + M - 1) - A.begin() - i;
        maxPresents = max(maxPresents, count);
    }

    cout << maxPresents << endl;

    return 0;
}
