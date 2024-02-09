#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = m; i < n; i++)

int n;
string r, c;
vector<char> abc = {'a', 'b', 'c'};
vector<int> p, q;

int main()
{
    cin >> n >> r >> c;
    p.resize(n);
    rep(i, 0, n - 3)
    {
        abc.push_back('.');
    }
    rep(i, 1, n + 1)
    {
        p.push_back(i);
        q.push_back(i);
    }

    do
    {
        do
        {
            
        } while (next_permutation(q.begin(), q.end()));
        
        
    } while (next_permutation(p.begin(), p.end()));
    

}