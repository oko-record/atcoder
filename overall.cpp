#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, countT = 0, countA = 0;
    cin >> n;
    string s;
    cin >> s;
    for (auto& x : s)
    { 
        if (x == 'T') countT++;
        else countA++;
    }
    if (countT == countA)
    {
        if (s[n - 1] == 'T') cout << 'A' << endl;
        else cout << 'T' << endl;
    }
    else if (countT > countA) cout << 'T' << endl;
    else cout << 'A' << endl;
}