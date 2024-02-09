#include <iostream>
#include <vector>
#include <map>
using namespace std;

int n, nextx = 1, iter = 0, num1, num2;
vector<int> a, ans;
map<int, int> tmp, cnt;

int main()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        if (tmp[nextx] == 0)
        {
            tmp[nextx]++;
            cnt[nextx] = iter;
            ans.push_back(nextx);
            iter++;
        }
        else if (iter != 0 && tmp[nextx] != 0)
        {
            num1 = iter - cnt[nextx];
            num2 = iter - num1;
            break;
        }
        nextx = a[nextx - 1];
    }
    int count = 0;
    cout << num1 << endl;
    for (int i = num2; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i < ans.size() - 1)
        {
            cout << ' ';
        }
    }
}