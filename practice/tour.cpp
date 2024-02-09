#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <climits>
#include <algorithm>
#include <iomanip>

using namespace std;
using ll = long long;

long long n, m;

int main()
{
    cin >> n >> m;
    vector<long long> a(m), cnt(n);
    vector<vector<long long>> tmp(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    vector<string> s(n);
    for (auto &x : s)
    {
        cin >> x;
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            if (s[i][j] == 'o')
            {
                cnt[i] += a[j];
            }
            else
            {
                tmp[i].push_back(a[j]);
            }
        }
        cnt[i] += i + 1;
        sort(tmp[i].begin(), tmp[i].end(), greater<long long>());
    }

    for (long long i = 0; i < n; i++)
    {
       
       cout << 1; long long c = cnt[i];
        long long acnt = 0;
        for (long long j = 0; j < (long long)tmp[i].size(); j++)
        {
            bool allButI = all_of(cnt.begin(), cnt.begin() + i, [c](long long x)
                                  { return x < c; }) &&
                           all_of(cnt.begin() + i + 1, cnt.end(), [c](long long x)
                                  { return x < c; });

            if (allButI)
            {
                cout << acnt << endl;
                break;
            }
            else
            {
                acnt++;
                c += tmp[i][j];
            }
            
        }
    }
}