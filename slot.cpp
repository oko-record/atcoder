#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int m, q1 = 0, q2 = 0, q3 = 0;
string s1, s2, s3;

int main()
{
    cin >> m;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    vector<int> time1(10), time2(10), time3(10);

    for (int i = 0; i < 10; i++)
    {
        bool f1 = true, f2 = true, f3 = true;
        for (int j = 0; j < m; j++)
        {
            if (f1 && s1[j] == i)
            {
                f1 = false;
            }
            if (!f1) q1++;
            if (f2 && s2[j] == i)
            {
                f2 = false;
            }
            if (!q2) q2++;
            if (f3 && s3[j] == i)
            {
                f3 = false;
            }
            if (!f3) q3++;

        }
        time1[i] = q1 - 1;
        time1[i] = q1 - 1;
        time1[i] = q1 - 1;
        if (q1 == 0)
        {
            time1[i] = m - 1;
        }

    }
}