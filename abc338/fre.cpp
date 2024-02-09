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
    string s;
    cin >> s;
    map<char, int> frequency;

    // 文字列の中の各文字の頻度をカウント
    for (char ch : s)
    {
        // アルファベットのみをカウント
        if (isalpha(ch))
        {
            // 大文字小文字を区別しないため、小文字に統一
            ch = std::tolower(ch);
            frequency[ch]++;
        }
    }

    char mostFrequent = 'z';
    int maxCount = 0;

    for (auto &pair : frequency)
    {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < mostFrequent))
        {
            mostFrequent = pair.first;
            maxCount = pair.second;
        }
    }
    cout << mostFrequent;
}