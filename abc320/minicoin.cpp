#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;
vector<long> in(3);

int main()
{
    cin >> n;
    for (auto &x : in)
        cin >> x;

    ans = 10000;
    for (int x = 0; x < 10000; x++)
    {
        if (n - in[0] * x >= 0)
        {
            for (int y = 0; y < 10000; y++)
            {
                long long tmp = in[0] * x + in[1] * y;
                if (n - tmp >= 0 && (n - tmp) % in[2] == 0)
                {
                    int z = (n - tmp) / in[2];
                    if (ans > x + y + z)
                    {
                        ans = x + y + z;
                    }
                }
            }
        }
    }

    cout << ans;
}
