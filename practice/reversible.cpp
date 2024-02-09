#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
typedef long long ll;

void reverse(ll *a, ll *b)
{

}

int main()
{
    ll n, count = 0, bob = 0, maxIndex1, evac, maxIndex2;
    cin >> n;
    ll a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    while (count < n)
    {
        maxIndex1 = distance(a, max_element(a, a + n));
        swap(a[maxIndex1], b[maxIndex1]);

        maxIndex2 = distance(a, max_element(a, a + n));
        bob += a[maxIndex2];
        a[maxIndex2] = LLONG_MIN;
        c[maxIndex2] = LLONG_MIN;
        count++;
        /*cout << bob << endl;*/
    }

    cout << bob << endl;

    return 0;
}