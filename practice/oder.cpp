#include <iostream>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    int d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int temp = d[0] + q;
    for (int i = 1; i < n; i++)
    {
        if (d[i] + q < temp)
        {
            temp = d[i] + q;
        }
    }
    if (temp < p) cout << temp << endl;
    else cout << p << endl;
    return 0;
}