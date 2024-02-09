#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> ans(t);
    for (int i = 0; i < t; i++)
    {
        int n, d, k, x;
        vector<int> a;
        a.push_back(0);
        cin >> n >> d >> k;
        for (int j = 0; j < n - 1; j++)
        {
            x = (a[j] + d) % n;
            while (find(a.begin(), a.end(), x) == a.end())
            {
                x = (x + 1) % n;
                cout << i << x << endl;;
            }
            a.push_back(x);
        }
        ans[i] = a[k - 1];
    }
    for (auto& x : ans) cout << x << endl;
}