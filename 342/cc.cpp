#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, q;
    cin >> n;
    string s;
    cin >> s >> q;
    vector<char> convert(26); // 各文字に対する変換先を格納する配列
    for (int i = 0; i < 26; ++i) {
        convert[i] = 'a' + i; // 初期状態では、各文字は自分自身に変換される
    }
    while (q--) {
        char a, b;
        cin >> a >> b;
        for (int i = 0; i < 26; ++i) {
            if (convert[i] == a) { // aに変換される文字をbに変換するように更新
                convert[i] = b;
            }
        }
    }
    for (char &c : s) { // 文字列Sを走査し、変換を適用
        c = convert[c - 'a'];
    }
    cout << s << endl;
    return 0;
}
