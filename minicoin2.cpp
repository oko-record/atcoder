#include <iostream>
#include <climits>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a, b, c;
    cin >> a >> b >> c;
    int ans = INT_MAX;

    rep(x, 10000)
    {
        if (a * x > n)
            continue;
        else
        {
            rep(y, 10000)
            {
                if (x + y > 9999 || a * x + b * y > n || (n - a * x - b * y) % c != 0)
                    continue;
                else
                {
                    long long z = (n - a * x - b * y) / c;
                    if (ans > x + y + z)
                        ans = x + y + z;
                }
            }
        }
    }
    cout << ans;
}
