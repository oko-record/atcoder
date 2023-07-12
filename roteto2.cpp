#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j + 1 < n)
            {
                a[i][j + 1] = s[i][j];
            }
            else if (j + 1 == n && i + 1 < n)
            {
                a[i + 1][j] = s[i][j];
            }
            else if (j == 0)
            {
                a[i - 1][j] = s[i][j];
            }
            else if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                a[i][j] = s[i][j];
            }
            else
            {
                a[i][j - 1] = s[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] ;
        }
        cout << endl;
    }
    return 0;
}