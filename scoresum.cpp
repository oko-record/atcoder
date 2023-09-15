#include <iostream>
#include <vector>

using namespace std;

int n, t, q, l, r;
vector<int> c, s1, s2;

int main()
{
    cin >> n;
    c.resize(n + 1);
    s1.resize(n + 1);
    s2.resize(n + 1);
    s1[0] = 0;
    s2[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> c[i];
        s1[i] = s1[i - 1];
        s2[i] = s2[i - 1];
        cin >> t;
        if (c[i] == 1)
        {
            s1[i] += t;
        }
        else
        {
            s2[i] += t;
        }
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;

        cout << s1[r] - s1[l - 1] << ' ' << s2[r] - s2[l - 1] << endl;
    }
}