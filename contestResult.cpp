#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n], b[m];
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    for (auto& x : b)
    {
        sum += a[x - 1];
    }
    cout << sum;
}