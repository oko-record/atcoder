#include <iostream>
#include <string>

using namespace std;

int n;

void dfs(string s, char mx)
{
    if (s.length() == n)
    {
        cout << s << endl;
    }
    else
    {
        for (char c = 'a'; c <= mx; c++)
        {
            dfs(s + c, ((c == mx) ? mx + 1 : mx));
        }
    }
}

int main()
{
    cin >> n;
    dfs("", 'a');
}