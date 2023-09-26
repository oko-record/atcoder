#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0, ans = 0;
    bool flag;
    for (auto &w : s)
    {
        flag = true;
        if (w == 'A' || w == 'C' || w == 'G' || w == 'T')
            cnt ++;
        else
        {
            if (ans < cnt)
                ans = cnt;
            cnt = 0;
            flag = false;
        }    
    }
    if (flag)
    {
        if (ans < cnt)
        {
            cout << cnt;
            return 0;
        }
    }
    cout << ans;
}