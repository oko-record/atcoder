#include <iostream>
#include <climits>
using namespace std;
typedef long long ll;

ll main()
{
    ll w, h, n;
    cin >> w >> h;
    cin >> n;

    ll count[n];
    ll ichigoX[n], ichigoY[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ichigoX[i] >> ichigoY[i];
        count[i] = 0;
    }

    ll a;
    cin >> a;
    ll A[a + 2];
    A[0] = 0;
    for (ll i = 1; i < a + 1; i++)
    {
        cin >> A[i];
    }
    A[a + 1] = w;

    ll b;
    cin >> b;
    ll B[b + 2];
    B[0] = 0;
    for (ll i = 1; i < b + 1; i++)
    {
        cin >> B[i];
    }
    B[b + 1] = h;

    ll c = 0;

    ll max = 0, min = __LONG_LONG_MAX__;

    for (ll i = 0; i < a + 1; i++)
    {
        for (ll j = 0; j < b + 1; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                if (ichigoX[k] >= A[i] && ichigoX[k] < A[i + 1] && ichigoY[k] >= B[j] && ichigoY[k] < B[j + 1])
                {
                    count[c]++;
                }
            }

            if (count[c] < min)
            {
                min = count[c];
            }
            if (count[c] > max)
            {
                max = count[c];
            }
            c++;
        }
    }

    cout << min << ' ' << max << endl;
}