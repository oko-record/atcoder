#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[m], b[m], c[n];
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    return 0;
}