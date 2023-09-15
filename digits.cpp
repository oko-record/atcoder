#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int b, k;
long long n, q, ans = 0, cnt = 0;
vector<int> c, d;

void combi(int depth)
{
    if (depth == n)
    {
        for (int i = 0; i < n; i++)
        {
            // cout << d[i];
            ans += d[i] * pow(10, i);
        }
        // cout << ans << endl;
        if (ans % b == 0)
            cnt++;
        ans = 0;
        return;
    }

    for (int i = 0; i < c.size(); i++)
    {
        
        d.push_back(c[i]);
        combi(depth + 1);
        d.pop_back();
    }
}

int main()
{
    cin >> n >> b >> k;
    c.resize(k);
    for (auto &x : c)
    {
        cin >> x;
    }
    q = pow(10, 9) + 7;

    combi(0);
    cout << cnt % q << endl;
}