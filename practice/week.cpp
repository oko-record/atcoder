#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7 * n], sum[n];
    for (int i = 0; i < 7 * n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        sum[i] = 0;
        for (int j = 7 * i; j < 7 * (i + 1); j++)
        {
            sum[i] += a[j];
        }
    }
    for (int i = 0; i < n; i++) cout << sum[i] << ' ';
    
    return 0;
}