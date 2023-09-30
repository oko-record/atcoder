#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, in;
vector<vector<int>> a;
vector<int> b, c;

int main()
{
    cin >> n;
    a.resize(n + 1);
    c.resize(n + 1);
    for (int i = 1; i <= 3 * n; i++)
    {
        cin >> in;
        //cout << i;
        a[in].push_back(i);
    }

    for (int i = 1; i <= n; i++)
    {
        //cout << a[i][1] << endl;
        b.push_back(a[i][1]);
        c[a[i][1]] = i;
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        //cout << b[i] << endl;
        cout << c[b[i]];
        if (i != n - 1)
        {
            cout << ' ';
        }
    }

}