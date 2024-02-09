#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int h, w, ans = 0;
    char row_p, col_p;
    int flag_r, flag_c, end_r = 1, end_c = 1;
    cin >> h >> w;
    vector<int> del_r, del_c;
    vector<vector<char>> c(h, vector<char>(w));
    for (auto &row : c)
    {
        for (auto &x : row)
        {
            cin >> x;
        }
    }

    while (end_r == 1 || end_c == 1)
    {
        end_r = 0;
        end_c = 0;
        for (int i = 0; i < h;)
        {
            row_p = c[i][0];
            flag_r = 1;
            for (int j = 1; j < w; j++)
            {
                if (row_p != c[i][j])
                {
                    flag_r = 0;
                    break;
                }
            }
            if (flag_r == 1)
            {
                c.erase(c.begin() + i);
                h--;
                end_r = 1;
            }
            else
            {
                i++;
            }
        }

        for (int i = 0; i < w;)
        {
            col_p = c[0][i];
            flag_c = 1;
            for (int j = 1; j < h; j++)
            {
                if (col_p != c[j][i])
                {
                    flag_c = 0;
                    /*cout << 3 << endl;
                    cout << 9 << flag_c << endl;*/
                    break;
                }
            }
            /*cout << 8 << flag_c << endl;
            cout << 2 << i << endl;*/
            if (flag_c == 1)
            {
                /*cout << 7 << endl;*/
                for (auto &row : c)
                {
                    row.erase(row.begin() + i);
                }
                /*cout << 24 << i << endl;*/
                w--;
                end_c = 1;
                /*cout << w << endl;*/
            }
            else
            {
                i++;
                /*cout << 7 << endl;*/
            }
            for (auto &row : c)
            {
                for (auto &x : row)
                {
                    cout << x << endl;
                }
            }
            /*cout << i << w << endl;*/
        }
        cout << end_r << end_c << endl;
        for (auto &row : c)
        {
            for (auto &x : row)
            {
                cout << x << endl;
            }
        }
    }

    cout << c.size();
    cout << c[0][0];
}