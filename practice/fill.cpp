#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, iter = 0, count = 0;
    cin >> n;
    vector<int> a(n), b;
    for (auto& x : a)
    {
        cin >> x;
        b.push_back(x);
        iter++;
    }
    for (int k = 0; k < iter - 1; k++)
    {
        if (a[k] > a[k + 1] + 1)
        {
            for (int i = a[k] - 1; i > a[k + 1]; i--)
            {
                count++;
                b.insert(b.begin() + count, i);
            }            
        }
        else if (a[k] + 1 < a[k + 1])
        {
            for (int i = a[k] + 1; i < a[k + 1]; i++)
            {
                count++;
                b.insert(b.begin() + count, i);
            }
        }
        count++;
    }
    for (auto& x : b) cout << x << ' ';
}