#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int p[n], c[n], f[m];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> c[i];
        for (int j = 0; j < c[i]; j++)
        {
            cin >> f[j]; 
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i] >= p[j])
            {
                for ()
            }
        }
    }

    return 0;
}