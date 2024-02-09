#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

ll n, m = 0, a = 0, r = 0, c = 0, h = 0, ans = 0;
string in;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (in[0] == 'M')
        {
            m++;
        }
        else if (in[0] == 'A')
        {
            a++;
        }
        else if (in[0] == 'R')
        {
            r++;
        }
        else if (in[0] == 'C')
        {
            c++;
        }
        else if (in[0] == 'H')
        {
            h++;
        }
    }
    vector<int> bit = {0, 0, 1, 1, 1};
    vector<ll> s = {m, a, r, c, h};
    do
    {
        ll tmp_ans = 1;
        for (int i = 0; i < 5; i++)
        {
            if (bit[i] == 1)
            {
                tmp_ans *= s[i];
            }
        }
        ans += tmp_ans;

    } while (next_permutation(bit.begin(), bit.end()));

    cout << ans;
}