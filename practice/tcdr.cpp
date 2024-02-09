#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    vector<char> ss;
    cin >> s;
    for (auto& x : s)
    {
        if (x != 'a' && x != 'i' && x != 'u' && x != 'e' && x != 'o')
        {
            ss.push_back(x);
        }
    }
    for (auto& x : ss)
    {
        cout << x;
    }

}