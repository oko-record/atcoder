#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n[t];
    string s[t], ss[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        cin >> s[i];
        ss[i] = s[i];

        int a[n[i] - 1], b[n[i] - 1];

        for (int x = 0; x < n[i] - 1; x++)
        {
            int a_c = 0;
            int b_c = 0;
            for (int j = 0; j < n[i] - 1 - x; j++)
            {

                if (s[i][j] == 'A')
                {
                    a[a_c] = 1 + j;
                    a_c++;
                }
                else
                {
                    b[b_c] = 1 + j;
                    b_c++;
                }

            }

            for (int m = 0; m < a_c; m++)
            {
                ss[i][m] = s[i][a[m]];
            }
            for (int n = 0 + a_c; n < b_c + a_c; n++)
            {
                ss[i][n] = s[i][b[n - a_c]];
            }

            s[i] = ss[i];

            for (int u = 0; u < x + 1; u++)
            {
                s[i][n[i] - 1 - u] = '\0';
            }
        }
        
        cout << s[i] << endl;
    }
    return 0;
}