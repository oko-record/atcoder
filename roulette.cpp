#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        a[i].resize(c[i]);
        for (int j = 0; j < c[i]; j++)
        {
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;

    vector<int> ans, count, aaa;
    int ct = 0, ok = 0;
    bool q = false;

    for (int i = 0; i < n; i++)
    {
        if (find(a[i].begin(), a[i].end(), x) != a[i].end())
        {
            ans.push_back(i);
            count.push_back(size(a[i]));
            ct++;
            q = true;
        }
    }

    if (q)
    {
        int minIndex = distance(count.begin(), min_element(count.begin(), count.end()));
        int mine = count[minIndex];

        for (int i = 0; i < ct; i++)
        {
            if (mine == count[i])
            {
                aaa.push_back(ans[i]);
                ok++;
            }
        }
        cout << ok << endl;
        for (auto& x : aaa)
        {
            cout << x + 1 << ' ';
        }
    }
    else
    {
        cout << 0 << endl;
        cout << endl;
    }
}