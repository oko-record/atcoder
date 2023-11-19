#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int n, cnt = 0, ans = 0;
    string s;
    cin >> n >> s;

    unordered_map<char, int> stringCounts;
    char last_char = '\0';
    unordered_map<char, int> len;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] != last_char)
        {
            last_char = s[i];
            cnt = 1;
        }
        else
        {
            cnt++;
        }
        if (len[s[i]] < cnt)
        {
            len[s[i]]++;
            stringCounts[s[i]]++;
        }
    }

    for (auto &x : stringCounts)
    {
        ans += x.second;
    }
    cout << ans << endl;
    return 0;
}
