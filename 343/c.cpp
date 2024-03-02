#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

bool is_palindrome(long long num)
{
    string s = to_string(num);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

bool isCube(long long n)
{
    // nの絶対値の立方根を計算し、最も近い整数に丸める
    long long root = round(cbrt(n));

    // 丸めた結果の立方が元の数nと等しいかチェック
    return root * root * root == n;
}

long long largest_palindromic_cube(long long N) {
    long long max_x = cbrt(N) + 1; // Nの立方根
    for (long long x = max_x; x >= 1; --x) {
        long long cube = x * x * x;
        if (cube > N) continue;
        if (is_palindrome(cube)) {
            return cube;
        }
    }
    return -1; // 見つからない場合（理論上はあり得ないが、関数が値を返すために必要）
}

int main()
{
    long long N;
    cin >> N;
    cout << largest_palindromic_cube(N) << endl;
    return 0;
}
