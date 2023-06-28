#include <iostream>
#include <string>
#include <memory>
using namespace std;

int* check(int i, int j, int k, int m, int n, string s[], int h, int w)
{
    string snuke = "snuke";
    int* flag = new int[4];
    int* zero = new int[4];
    flag[0] = i;
    flag[1] = j;
    flag[2] = m;
    flag[3] = n;
    zero[0] = -1;
    zero[1] = -1;
    zero[2] = -1;
    zero[3] = -1;
    k++;

    if (i+2*m >= 0 && i+2*m < h && j+2*n >= 0 && j+2*n < w)
    {
        if (s[i + 2 * m][j + 2 * n] == snuke[k])
        {
            k++;
            if (i+3*m >= 0 && i+3*m < h && j+3*n >= 0 && j+3*n < w)
            {
                if (s[i + 3 * m][j + 3 * n] == snuke[k])
                {
                    k++;
                    if (i+4*m >= 0 && i+4*m < h && j+4*n >= 0 && j+4*n < w)
                    {
                        if (s[i + 4 * m][j + 4 * n] == snuke[k])
                        {
                            delete[] zero;
                            return flag;
                        }
                    }
                }
            }
        }
    }
    return zero;
}

void print(int* flag)
{
    int i = flag[0];
    int j = flag[1];
    int m = flag[2];
    int n = flag[3];

    cout << i+1 << ' ' << j+1 << endl;
    cout << i+1+m << ' ' << j+1+n << endl;
    cout << i+1+2*m << ' ' << j+1+2*n << endl;
    cout << i+1+3*m << ' ' << j+1+3*n << endl;
    cout << i+1+4*m << ' ' << j+1+4*n << endl;
    return;
}

int main()
{
    int h, w, dir[] = {1, 0, -1}, k = 0;
    cin >> h >> w;
    string s[h], snuke = "snuke";

    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            k = 0;
            if (s[i][j] == 's')
            {
                k++;
                for (int m = -1; m < 2; m++)
                {   
                    if (i+m >= 0 && i+m < h)
                    {
                        for (int n = -1; n < 2; n++)
                        {
                            if (j+n >= 0 && j+n < w)
                            {
                                k = 1;
                                if (s[i + m][j + n] == snuke[k])
                                {
                                    int* flag = check(i, j, k, m, n, s, h, w);
                                    if (flag[0] != -1)
                                    {
                                        print(flag);
                                        delete[] flag;
                                        return 0;
                                    }
                                    delete[] flag;
                                    
                                }
                            }
                        }
                    }
                }
            }
        }        
    }

    return 0;
}
