#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;

ll n;
set<string> s;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string in, in2;
        cin >> in;
        in2 = in;
        reverse(in.begin(), in.end());
        if (in < in2)
        {
            s.insert(in2);
        }
        else
        {
            s.insert(in);
        }
    }

    cout << s.size();
}