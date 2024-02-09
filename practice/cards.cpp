#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int iter = 0, equal = 0, s_count = 0, t_count = 0;
    for (auto &x : s)
    {
        int count = 0;
        for (auto &y : t)
        {
            if (x == y)
            {
                if (x == '@') s_count++;
                if (y == '@') t_count++;
                equal++;
                swap(t[iter], t[count]);
            }
            else count++;
        }
        iter++;
    }
    int rem = s.size() - equal;
    int atto = abs(s_count - t_count);
    if (rem == atto) cout << "Yes";
    else cout << "No";
}