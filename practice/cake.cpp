#include <iostream>
using namespace std;

int main()
{
    int W, H, N, A, B;
    cin >> W >> H;
    cin >> N;

    int p[N], q[N];
    for (int i = 0; i < N; i++)
    {
        cin >> p[i] >> q[i];
    }

    cin >> A;
    int a[A];
    for (int i = 0; i < A; i++)
    {
        cin >> a[i];
    }

    cin >> B;
    int b[B];
    for (int i = 0; i < B; i++)
    {
        cin >> b[i];
    }

    int count[A][B];
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            count[i][j] = 0;
        }
    }

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (p[k] <= a[i] && q[k] <= b[j])
                {
                    count[i][j]++;
                }
            }
        }
    }

    int min, max;
    min = count[0][0];
    max = count[0][0];

    for (int i = 0; i < A+1; i++)
    {
        for (int j = 0; j < B+1; j++)
        {
            if (count[i][j] > max)
            {
                max = count[i][j];
            }
            if (count[i][j] < min)
            {
                min = count[i][j];
            }
        }
    }

    cout << min << ' ' << max << endl;
}