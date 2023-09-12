#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>
#include <numeric>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long> l(n);
    for (auto& x : l) 
    {
        cin >> x;
        x ++;
    }

    long lower = ranges::max(l) - 1;
    long upper = reduce(begin(l), end(l));

    while (lower + 1 < upper)
    {
        long middle = (lower + upper) / 2;
        int rows = 1;
        long length = 0;

        for (int i = 0; i < n; i++)
        {
            length += l[i];
            if (length > middle)
            {
                rows ++;
                length = l[i];
            }
        }

        if (rows > m) lower = middle;
        else upper = middle;
    }

    cout << upper - 1 << endl;
}