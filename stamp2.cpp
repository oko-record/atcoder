#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    vector<int> used(n - m + 1);
    queue<int> q;

    auto check = [&](int k)
    {
        if (used[k])
            return;
        bool ok = true;
        for (int i = 0; i < m; i++)
        {
            ok &= (s[k + i] == '#' or s[k + i] == t[i]);
        }
        if (ok)
        {
            used[k] = true;
            q.push(k);
        }
    };

    for (int k = 0; k < n - m + 1; k++)
    {
        check(k);
    }

    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int j = 0; j < m; j++)
        {
            s[i + j] = '#';
        }
        for (int j = max(i - m + 1, 0); j <= min(i + m - 1, n - m); j++)
        {
            check(j);
        }
    }
    cout << (s == string(n, '#') ? "Yes" : "No");
}