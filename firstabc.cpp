#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, ans = 1, check = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<char> abc {'A', 'B', 'C'};
    for (auto& x : s)
    {
        int i = 0;
        for (auto& y : abc)
        {
            if (x == y)
            {
                abc.erase(abc.begin() + i);
                if (check == 2)
                {
                    cout << ans << endl;
                    exit(0);
                }
                check++;
            }
            i++;
        }
        ans++;
    }

}