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

using namespace std;

int main() {
    int n;
    char c;
    cin >> n;

    map<char, int> stringCounts;
    string tmp;
    char last_char = '\0';

    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c != last_char) {
            last_char = c;
            tmp = c;
        } else {
            tmp += c;
        }
        stringCounts[c]++;
    }

    cout << stringCounts.size() << endl;
    return 0;
}
