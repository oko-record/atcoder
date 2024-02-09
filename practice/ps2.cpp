#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
   int a = (1 << 2) | (1 << 3) | (1 << 5) | (1 << 7);

   for (int bit = a; ; bit = (bit - 1) & a)
   {
        vector<int> s;

        for (int j = 0; j < n; j++)
        {
            if (bit & (1 << j))
            {
                s.push_back(j);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)s.size(); ++i) {
            cout << s[i] << " ";
        }
        cout << "}" << endl;

        if (!bit)
            break;
   }
}