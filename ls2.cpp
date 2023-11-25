#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;
using ll = long long;

#define rep(i, m, n) for (int i = (m); i < (n); i++)

int main()
{
    int n;
    cin >> n;
    char c;
    map<char, vector<pair<int, int>>> shape;
    vector<vector<char>> grid(n, vector<char>(n));
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
           cin >> c;
        shape[c].push_back(make_pair(i, j)) 
        }
        
        
    }
    
}