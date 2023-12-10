#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkGridsEqual(const vector<vector<int>> &a, const vector<vector<int>> &b)
{
    int h = a.size();
    int w = a[0].size();
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void swapRows(vector<vector<int>> &grid, int row1, int row2)
{
    swap(grid[row1], grid[row2]);
}

void swapCols(vector<vector<int>> &grid, int col1, int col2)
{
    for (auto &row : grid)
    {
        swap(row[col1], row[col2]);
    }
}

bool canTransform(vector<vector<int>> &a, const vector<vector<int>> &b)
{
    int h = a.size();
    int w = a[0].size();

    // 全ての行の入れ替えを試す
    for (int i = 0; i < h - 1; ++i)
    {
        int j = i + 1;
        swapRows(a, i, j);
        if (checkGridsEqual(a, b))
        {
            return true;
        }
        else if (canTransform(a, b))
        {
            return true;
        }
        swapRows(a, i, j); // 元に戻す
    }

    // 全ての列の入れ替えを試す
    for (int i = 0; i < w - 1; ++i)
    {
        int j = i + 1;
        swapCols(a, i, j);
        if (checkGridsEqual(a, b))
        {
            return true;
        }
        else if (canTransform(a, b))
        {
            return true;
        }
        swapCols(a, i, j); // 元に戻す
    }

    return false;
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w)), b(h, vector<int>(w));

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin >> b[i][j];
        }
    }

    if (canTransform(a, b))
    {
        cout << "Possible" << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
