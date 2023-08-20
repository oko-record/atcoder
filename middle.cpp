#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int m, count = 0, s = 0, day = 0;;
    cin >> m;
    vector<int> d(m);
    for(auto& x : d)
    {
        cin >> x;
        count += x;
    }
    count = (count + 1) / 2;
    for (int i = 0; i < m; i++)
    {   
        s += d[i];
        if (s >= count)
        {
            day = count - (s - d[i]);
            cout << i + 1 << ' ' << day;
            return 0;
        }
    }

}