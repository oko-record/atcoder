#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
using namespace std;

string n;

int main()
{
    cin >> n;
    vector<char> s;
    for (int i = 0; i < n.size(); i++)
    {
        if (!s.empty())
        {
            if (n[i] < s.back())
            {
                s.push_back(n[i]);
            }
            else
            {
                cout << "No";
                return 0;
            }
        }
        else
            s.push_back(n[i]);
    }
    cout << "Yes";
}