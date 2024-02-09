#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j + 1 < n)
            {
                cin >> a[i][j + 1];
            }
            else if (j + 1 == n && i + 1 < n)
            {
                cin >> a[i + 1][j];
            }
            else if (j == 0)
            {
                cin >> a[i - 1][j];
            }
            else if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                cin >> a[i][j];
            }
            else
            {
                cin >> a[i][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << endl;
        }
    }
    return 0;
}