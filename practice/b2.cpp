#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++)
    {
        if (n % i == 0 && n / i < 10)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}