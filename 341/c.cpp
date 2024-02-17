#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int H, W, N, ans = 0, x, y;
    cin >> H >> W >> N;
    vector<vector<int>> used(H, vector<int>(W, 0));
    string T;
    cin >> T;
    vector<string> S(H);
    for (int i = 0; i < H; i++)
        cin >> S[i];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == '#')
                continue;
            x = i;
            y = j;
            int ccc = 0;
            for (char c : T)
            {
                if (c == 'L')
                {
                    y -= 1;
                    if (y < 0)
                    {
                        break;
                    }
                    if (S[x][y] == '#')
                        break;
                }

                else if (c == 'R')
                {
                    y += 1;
                    if (y >= W)
                    {
                        break;
                    }
                    if (S[x][y] == '#')
                        break;
                }

                else if (c == 'U')
                {
                    x -= 1;
                    if (x < 0)
                    {
                        break;
                    }
                    if (S[x][y] == '#')
                        break;
                }

                else if (c == 'D')
                {
                    x += 1;
                    if (x >= H)
                    {
                        break;
                    }
                    if (S[x][y] == '#')
                        break;
                }

                ccc++;
            }

            if (ccc == N)
            {
                if (used[x][y] == 0)
                {
                    ans++;
                    used[x][y] = 1;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
