#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (abs(a - b) == 1)
    {
        if (a % 3 != 2 && b % 3 != 2)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
}