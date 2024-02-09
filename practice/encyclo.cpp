#include <iostream>
#include <string>
using namespace std;

bool judge(string s)
{
    int dep = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(') dep ++;
        else if (s[i] == ')') dep --;
        if (dep < 0) return false;
    }
    if (dep == 0) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < (1 << n); i++)
    {
        string cand = "";
        for (int j = n - 1; j >= 0; j--)
        {
            if ((i & (1 << j)) == 0) cand += '(';
            else cand += ')';
        }
        if (judge(cand)) cout << cand << endl;
    }
}