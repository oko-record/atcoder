#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // I/O の最適化
    cin.tie(nullptr); // I/O の最適化Ï

    int n, m, in;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        c[i] = in;
    }

    for (int i = 0; i < m; i++)
    {
        vector<int> index_;
        vector<char> temp;
        for (int j = 0; j < n; j++)
        {
            if (c[j] == i + 1)
            {
                index_.push_back(j);
                temp.push_back(s[j]);
            }
        }
        for (int j = 0; j < (int)index_.size(); j++)
        {
            s[index_[(j + 1) % (int)index_.size()]] = temp[j];
        }
    }
    cout << s;
}