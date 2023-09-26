#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            if (s[i + 1] == 'B')
            {
                if (s[i + 2] == 'C')
                {
                    cnt ++;
                }
            }
        }
    }
    cout << cnt;
}