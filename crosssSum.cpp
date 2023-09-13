#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<int>  sum_row, sum_col;
    vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w)), sum_array(h, vector<int>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < h; i++)
    {
        int tmp_sum_row = 0;
        for (int j = 0; j < w; j++)
        {
            tmp_sum_row += a[i][j];
        }
        sum_row.push_back(tmp_sum_row);
    }

    for (int j = 0; j < w; j++)
    {
        int tmp_sum_col = 0;
        for (int i = 0; i < h; i++)
        {
            tmp_sum_col += a[i][j];
        }
        sum_col.push_back(tmp_sum_col);
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            sum_array[i][j] = sum_row[i] + sum_col[j] - a[i][j];
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << sum_array[i][j];
            if (j < w - 1)
                cout << ' ';
            else
                cout << endl;
        }
    }
}
