#include <iostream>
#include <string>

using namespace std;

string s;

int ans = 0, temp_ans = 1, w = 1;

int main()
{
    cin >> s;

    // For odd length palindrome
    for (int i = 0; i < s.length(); i++)
    {
        temp_ans = 1;
        w = 1;
        while (i - w >= 0 && i + w < s.length())
        {
            if (s[i - w] == s[i + w])
            {
                temp_ans += 2;
                w++;
            }
            else
                break;
        }
        if (ans < temp_ans)
            ans = temp_ans;
    }

    // For even length palindrome
    for (int i = 0; i < s.length() - 1; i++)
    {
        temp_ans = 0;
        w = 0;
        while (i - w >= 0 && i + 1 + w < s.length())
        {
            if (s[i - w] == s[i + 1 + w])
            {
                temp_ans += 2;
                w++;
            }
            else
                break;
        }
        if (ans < temp_ans)
            ans = temp_ans;
    }
    
    cout << ans;
}
