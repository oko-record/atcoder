#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep_v(v) for (auto &x : v)

using namespace std;

int main()
{
    int n, in_a, count = 0, iter = 0;
    cin >> n;
    vector<int> a;
    rep(i, n)
    {
        cin >> in_a;
        a.push_back(in_a);
    }

    rep_v(a)
    {
        if (x)
        {
            if (a[x - 1])
            {
                a[x - 1] = false;
                count++;
                //cout << x << endl;
            }
        }
    }
    cout << n - count << endl;
    rep(i, n)
    {
        if (a[i])
        {
            if (iter == 0)
                iter++;
            else
                cout << ' ';
            cout << i + 1;
        }
    }
}