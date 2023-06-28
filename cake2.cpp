#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int w, h, n;
    cin >> w >> h;
    cin >> n;

    int ichigo[n][n], a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> ichigo[i][0] >> ichigo[i][1];
    }

    cin >> a;
    int A[a + 2];
    A[0] = 0;
    for (int i = 1; i < a + 1; i++)
    {
        cin >> A[i];
    }
    A[a + 1] = w;

    cin >> b;
    int B[b + 2];
    B[0] = 0;

    for (int i = 1; i < b + 1; i++)
    {
        cin >> B[i];
    }
    B[b + 1] = h;

    int count[n];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }
    int c = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (ichigo[k][0] >= A[i] && ichigo[k][0] < A[i + 1] && ichigo[k][1] >= B[j] && ichigo[k][1] < B[j + 1])
                {
                    count[c]++;
                }
            }
            c++;
        }
    }

    int max = 0, min = INT_MAX;

    for (int i = 0; i < c; i++)
    {
        if (count[i] < min)
        {
            min = count[i];
        }
        if (count[i] > max)
        {
            max = count[i];
        }
    }

    cout << min << ' ' << max << endl;
}