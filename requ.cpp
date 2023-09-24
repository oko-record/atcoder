#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
string in;
int n;
map<string, int> s;
vector<int> a;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> in;
        if (s[in] == 0)
        {
            a.push_back(i + 1);
            s[in]++;
        }   
    }
    for (auto &x : a) cout << x << endl;;

}