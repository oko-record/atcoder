#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n)
{
    vector<int> divisors;
    for (int i = 1; i <= 9; ++i)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main()
{
    int n;
    cin >> n;

    vector<int> divisors = findDivisors(n);

    for (int i = 0; i <= n; i++)
    {
        bool flag = true;
        for (auto& j : divisors)
        {
            if (i % (n / j) == 0)
            {
                cout << j;
                flag = false;
                break;
            }
        }
        if (flag) cout << '-';
    }
}