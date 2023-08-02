#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, c = 0, ans = 0;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
    {
        auto min_element_iter = min_element(a.begin(), a.end() - c);
        x = *min_element_iter;
        a.erase(min_element_iter);
        a.push_back(x);
        c++;
        /*cout << x << ' ';*/
    }
    if (b[0] == 0)
    {
        ans++;
        for (int i = 0; i < k - 1; i++)
        {
            if (b[i + 1] == b[i] + 1)
            {
                ans++;
            }
            else
            {
                cout << ans;
                exit(0);
            }
        }
    }
    else
    {
        cout << 0;
        exit(0);
    }
    cout << ans;
}