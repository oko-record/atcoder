#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    map<string, int> stringCounts;
    string tmp;
    char last_char = '\0';

    for (int i = 0; i < n; ++i) {
        if (s[i] != last_char) {
            last_char = s[i];
            tmp = s[i];
        } else {
            tmp += s[i];
        }
        stringCounts[tmp]++;
    }

    cout << stringCounts.size() << endl;
    return 0;
}
