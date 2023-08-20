#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> c(h);

    for (auto &s : c)
    {
        cin >> s;
    }

    bool end_r = true, end_c = true, flag_r, flag_c;
    int p_r, p_c, iter, ans = 0;
    vector<int> rs, cs;
    for (int i = 0; i < h; i++)
    {
        rs.push_back(i);
    }
    for (int i = 0; i < w; i++)
    {
        cs.push_back(w);
    }

    while (true)
    {
        end_r = false;
        end_c = false;
        vector<int> row, col;
        iter = 0;

        for (auto& i : rs)
        {
            if (w == 1) break;
            p_r = c[i][0];
            flag_r = true;
            for (int j = 1; j < w; j++)
            {
                if (p_r != c[i][j])
                {
                    flag_r = false;
                    break;
                }
            }
            if (flag_r)
            {
                end_r = true;
                row.push_back(i);
            }
        }

        for (int j = 0; j < w; j++)
        {
            if (h == 1) break;
            p_c = c[0][j];
            flag_c = true;
            for (int i = 1; i < h; i++)
            {
                if (p_c != c[i][j])
                {
                    flag_c = false;
                    break;
                }
            }
            if (flag_c)
            {
                end_c = true;
                col.push_back(j);
            }
        }

        for (auto &r : row)
        {
            c.erase(c.begin() + r - iter);
            iter++;
            h--;
        }
        iter = 0;
        for (auto &co : col)
        {
            for (auto &r : c)
            {
                r.erase(r.begin() + co - iter);
            }
            iter++;
            w--;
        }
        
        if (not (end_r || end_c))
        {
            for (auto& r : c)
            {
                for (auto& x : r)
                {
                    ans++;
                }
            }
            cout << h * w;
            return 0;
        }
    }
}