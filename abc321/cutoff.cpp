#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
using namespace std;

long long n, x, sum = 0, in;
vector<long long> a;

int main()
{
    cin >> n >> x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> in;
        auto it = lower_bound(a.begin(), a.end(), in);
        a.insert(it, in);
    }

    for (int i = 1; i < n - 2; i++)
    {
        sum += a[i];
    }

    if (sum >= x)
    {
        cout << 0;
        return 0;
    }
    else if (sum + a[0] >= x)
    {
        cout << 0;
        return 0;
    }
    else if (x - sum <= a[n - 2])
    {
        cout << x - sum; 
        return 0;
    }
    else
    {
        cout << -1;
        return 0;
    }
    return 0;
}