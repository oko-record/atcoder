#include <iostream>
#include <array>
#include <vector>
#include <tuple>
#include <numeric>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    array<int, 9> c;
    for (auto &x : c)
        cin >> x;

    vector<tuple<int, int, int>> row{
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}};

    array<int, 9> order;
    iota(begin(order), end(order), 0);

    int not_dis = 0, all = 0;

    do
    {
        all++;
        bool dis_flag = true; // 各タプルでのチェックを通過したかどうかを示すフラグ

        for (auto &[a, b, c_idx] : row)
        {
            if (c[a] == c[b] && order[a] < order[c_idx] && order[b] < order[c_idx])
                dis_flag = false;
            // 同じ数字のペアが残り 2 通りの場合も同様
            else if (c[a] == c[c_idx] && order[a] < order[b] && order[c_idx] < order[b])
                dis_flag = false;
            else if (c[b] == c[c_idx] && order[b] < order[a] && order[c_idx] < order[a])
                dis_flag = false;
        }
        if (dis_flag)
            not_dis++; // すべてのタプルで条件を通過した場合、カウントアップ
    } while (ranges::next_permutation(order).found);

    cout << setprecision(30);
    cout << (double)not_dis / all << endl;

    return 0;
}
