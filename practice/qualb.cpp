#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k, count = 0, iter = 0;
    string s, ss;
    cin >> n >> k;
    cin >> s;
    while(iter < n)
    {
        if (count < k and s[iter] == 'o')
        {
            ss += 'o';
            count++;
        }
        else
        {
            ss += 'x';
        }
        iter++;
    }
    cout << ss;
}