#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    int dis[m][n], check[n][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> dis[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            check[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            check[dis[i][j]-1][dis[i][j+1]-1] = 1;
            check[dis[i][j+1]-1][dis[i][j]-1] = 1;

        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (check[i][j] == 0)
            {
                count++;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}