#include <iostream>
#include <vector>

using namespace std;

int n, l, k;
vector<int> a;

bool solve(int m)
{
    int cnt = 0, pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - pre >= m && l - a[i] >= m)
        {
            cnt += 1;
            pre = a[i];
        }
    }
    if (cnt >= k)
        return true;
    return false;
}

int main()
{
    n, l, k;
    cin >> n >> l;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        int a_input;
        cin >> a_input;
        a.push_back(a_input);
    }

    int left = 0, right = l;

    while (right - left > 1)
    {
        int mid = (left + right) / 2;
        if (!solve(mid))
            right = mid;
        else
            left = mid;
    }

    cout << left;
}
