#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int flavor(int fa, int fb, int sa, int sb)
{
    if (fa == fb)
    {
        if (sa < sb)
            return sb + sa / 2;
        else
            return sa + sb / 2;
    }
    else
    {
        return sa + sb;
    }
}

int main()
{
    int n, max = 0;
    cin >> n;
    int f[n], s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i] >> s[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (max < flavor(f[i], f[j], s[i], s[j]))
            {
                max = flavor(f[i], f[j], s[i], s[j]);
            }
        }
    }
    cout << max;
}