#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        a.insert(o);
    }
    for (int i = 0; i < k; i++)
    {
        if (a.find(i) == a.end())
        {
            cout << i;
            exit(0);
        }
    }
    cout << k;
}