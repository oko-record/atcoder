#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, sum;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    cin >> k;

    for (int i = 0; i < (1 << n); i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
            }
        }
        if (sum == k)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}