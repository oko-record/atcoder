#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, cnt = 0, ap= 0, aq = 0;
    cin >> n;
    vector<int> p(n), q(n), per(n);
    for (auto &x : p) cin >> x;
    for (auto &x : q) cin >> x;
    for (int i = 0; i < n; i++)
    {
        per[i] = i + 1;
    }

    do
    {
        cnt ++;
        if (per == p)
            ap = cnt;
        if (per == q)
            aq = cnt;
    } while (next_permutation(per.begin(), per.end()));
    
    cout << abs(ap - aq) << endl;
    
}