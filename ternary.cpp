#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

string toBase3(ll num)
{
    string base3 = "";
    while (num > 0)
    {
        base3 += std::to_string(num % 3);
        num /= 3;
    }
    reverse(base3.begin(), base3.end());
    return base3;
}

ll toBase(ll num)
{
    ll base3 = 0;
    while (num > 0)
    {
        base3 += num % 3;
        num /= 3;
    }
    return base3;
}

int main()
{
    ll t;
    cin >> t;
    ll cases[t][2], three[t];

    for (int i = 0; i < t; i++)
    {
        cin >> cases[i][0] >> cases[i][1];
        three[i] = toBase(cases[i][0]);
    }

    for (int i = 0; i < t; i++)
    {
        if (three[i] <= cases[i][1] && three[i] % 2 == cases[i][1] % 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}