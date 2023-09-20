#include <iostream>
#include <cmath>
#include <numbers>
#include <iomanip>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

long double t, l, x, y, q;

int main()
{
    cout << setprecision(15);
    long double pi = M_PI;
    cin >> t;
    cin >> l >> x >> y;
    cin >> q;
    vector<long double> e(q);
    rep(i, q)
    {
        cin >> e[i];
    }
    rep(i, q)
    {
        long double phase, dsin, dcos, dsqrt;
        phase = 2 * pi / t * e[i] - pi / 2;
        dsin = sin(phase) + 1;
        dcos = cos(phase) * -1;
        dsqrt = x * x + (y - l / 2 * dcos) * (y - l / 2 * dcos);
        cout << 180 / pi * atan2(l / 2 * (dsin), sqrt(dsqrt)) << endl;
    }
}