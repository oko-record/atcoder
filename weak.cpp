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



int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.size(); i += 2)
    {
        if (s[i] == '0')
        {
            cnt ++;
        }
    }
    if (cnt == 8)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}