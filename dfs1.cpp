#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;

int n, m, sh, sw, gh, gw;
vector<vector<char>> field;
vector<vector<int>> G;
vector<vector<bool>> seen;

const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

void dfs(int h, int w)
{
    seen[h][w] = true;

    for (int dir = 0; dir < 4; dir++)
    {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if (nh < 0 || nh >= n || nw < 0 || nw >= m)
        {
            continue;
        }
        if (field[nh][nw] == '#')
        {
            continue;
        }
        if (seen[nh][nw])
        {
            continue;
        }

        dfs(nh, nw);
    }
}

int main()
{
    cin >> n >> m;
    seen.resize(n, vector<bool>(m));
    Graph g(n);
    field.resize(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> field[i][j];
            if (field[i][j] == 's')
            {
                sh = i;
                sw = j;
            }
            else if (field[i][j] == 'g')
            {
                gh = i;
                gw = j;
            }
        }
    }

    for (auto &row : seen)
    {
        fill(row.begin(), row.end(), 0);
    }
    
    dfs(sh, sw);

    if (seen[gh][gw])
    {
        cout << "Yes";
    }
    else
        cout << "No";

}