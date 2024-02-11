#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

int n;
string s;

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            if (s[i + 1] == 'B')
            {
                if (s[i + 2] == 'C')
                {
                    cout << i + 1;
                    return 0;
                }
            }
        }
    }
    cout << -1;
}