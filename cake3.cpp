#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int w, h, n;
    cin >> w >> h;
    cin >> n;

    int count[n];
    int ichigoX[n], ichigoY[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ichigoX[i] >> ichigoY[i];
        count[i] = 0;
    }

    int a;
    cin >> a;
    int A[a + 2];
    A[0] = 0;
    for (int i = 1; i < a + 1; i++)
    {
        cin >> A[i];
    }
    A[a + 1] = w;

    int b;
    cin >> b;
    int B[b + 2];
    B[0] = 0;
    for (int i = 1; i < b + 1; i++)
    {
        cin >> B[i];
    }
    B[b + 1] = h;

    int c = 0;

    int max = 0, min = INT_MAX;

    for (int i = 0; i < a + 1; i++)
    {
        for (int j = 0; j < b + 1; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (ichigoX[k] >= A[i] && ichigoX[k] < A[i + 1] && ichigoY[k] >= B[j] && ichigoY[k] < B[j + 1])
                {
                    count[c]++;
                }
            }

            if (count[c] < min)
            {
                min = count[c];
            }
            if (count[c] > max)
            {
                max = count[c];
            }
            c++;
        }
    }

    cout << min << ' ' << max << endl;
}