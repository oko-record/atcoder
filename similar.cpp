#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    string s, t;
    cin >> n;
    cin >> s;
    cin >> t;

    char list[] = {'1', '0', 'l', 'o'};

    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            count++;
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                if (s[i] == list[j])
                {
                    if (t[i] == list[(j + 2) % 4])
                     {
                        count++;
                    }
                }
            }
        }
        
    }

    if (count == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;

}