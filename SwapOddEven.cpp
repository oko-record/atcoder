#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define r(i, n) for (int i = 1; i <= (n); i++)


int main()
{
    string s;
    cin >> s;
    int s_size = s.size();
    int s_half = s_size / 2;
    r(i, s_half)
    {
        swap(s[2 * i - 2], s[2 * i - 1]);
    }
    cout << s;
}