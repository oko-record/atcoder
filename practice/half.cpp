#include <iostream>
#include <climits>

using namespace std;

int a, b, c, x, y, z_lim, ans = INT_MAX;

int main()
{
    cin >> a >> b >> c >> x >> y;
    z_lim = 2 * max(x, y);

    for (int z = 0; z <= z_lim; z += 2)
    {
        int tmp_ans = 0;
        tmp_ans += a * max(0, x - z / 2);
        tmp_ans += b * max(0, y - z / 2);
        tmp_ans += c * z;
        ans = min(ans, tmp_ans);
    }
    cout << ans;
}