#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

bool isPerfectSquare(ll num) {
    ll root = static_cast<ll>(sqrt(num));
    return root * root == num;
}

ll strToNum(const string& s) {
    ll num = 0;
    for (char c : s) {
        num = num * 10 + (c - '0');
    }
    return num;
}

int main() {
    ll n;
    string s;
    cin >> n;
    cin >> s;

    set<ll> uniquePerfectSquares;

    sort(s.begin(), s.end());
    do {
        if (s[0] != '0') {
            ll num = strToNum(s);
            if (isPerfectSquare(num)) {
                uniquePerfectSquares.insert(num);
            }
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << uniquePerfectSquares.size() << endl;
    return 0;
}
