#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int n, ans = 0;
vector<vector<int>> x, y;

int main()
{
    cin >> n;
    x.resize(n);
    y.resize(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x[i].resize(a);
        y[i].resize(a);
        for (int j = 0; j < a; j++)
        {
            cin >> x[i][j] >> y[i][j];
        }
    }

    for (int i = 0; i < (1 << n); i++)
    {
        bitset<16> p(i);
        bool flag = false;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (p[j] == 1)
            {
                cnt ++;
                for (int l = 0; l < x[j].size(); l++)
                {
                    if (p[x[j][l] - 1] != y[j][l])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }

            /*
            else if (p[j] == 0)
            {
                for (int l = 0; l < x[j].size(); l++)
                {
                    if (p[x[j][l] - 1] == y[j][l])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            */
            

        }

        if (!flag)
        {
            ans = max(ans, cnt);
        }

    }
    cout << ans;
}