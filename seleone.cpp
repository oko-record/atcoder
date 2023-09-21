#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long k, l = 0, sum = 0;
    cin >> n >> k;
    vector<long long> a(n), b(n), c(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i] - b[i]);
    }
    if (sum > k)
    {
        cout << "No";
        return 0;
    }
    else if (sum % 2 != k % 2)
    {
        cout << "No";
        return 0;
    }
    cout << "Yes";
}