#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ab = a + b;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] == ab)
        {
            cout << i + 1 << endl;
            return 0; 
        }
    }
    return 0;
}