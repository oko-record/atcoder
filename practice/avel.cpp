#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int n;
long double ans = 0;
vector<int> x, y, route;

long double kaijo(int n)
{
    long double result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

long double dis(int i, int j)
{
    long double xx = x[i] - x[j];
    long double x2 = xx * xx;
    long double yy = y[i] - y[j];
    long double y2 = yy * yy;
    long double xy = x2 + y2;
    return sqrt(xy);
}

int main()
{
    cin >> n;
    x.resize(n);
    y.resize(n);
    route.resize(n);
    rep(i, n) cin >> x[i] >> y[i];
    rep(i, n) route[i] = i + 1;

    do
    {
        auto s = find(route.begin(), route.end(), 1);
        int ss = distance(route.begin(), s);
        for (int i = 2; i < n + 1; i++)
        {
            auto g = find(route.begin(), route.end(), i);
            int gg = distance(route.begin(), g);
            ans += dis(ss, gg);
            ss = gg;
        }
    } while (next_permutation(route.begin(), route.end()));

    cout << setprecision(20);
    cout << ans / kaijo(n);
    
}