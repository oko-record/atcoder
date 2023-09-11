#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, l, k, min = 1000000000;
    cin >> n >> l;
    cin >> k;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) < min)
        {
            min = abs(a[i] - a[i + 1]);
        }
    }

    cout << min;
}
