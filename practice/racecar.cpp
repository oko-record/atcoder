#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 入力
    int n;
    cin >> n;
    string s[n], st;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    // 内容
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {

                st = s[i] + s[j];

                for (int x = 0; x < st.length() / 2; x++)
                {
                    /*cout << st << endl;
                    cout << st.length() - x << endl;
                    cout << st[st.length() - x - 1] << endl;*/
                    if (st[x] != st[st.length() - x - 1])
                    {
                        break;
                    }
                    else if (x == st.length() / 2 - 1)
                    {
                        printf("Yes");
                        return 0;
                    }
                }
            }
        }
    }

    printf("No");
    return 0;
}