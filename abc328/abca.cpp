#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    size_t pos; // "ABC" の位置を保持する変数
    while ((pos = S.find("ABC")) != string::npos) {
        S.erase(pos, 3);
    }
    
    cout << S << endl;
    
    return 0;
}
