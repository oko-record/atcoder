#include <iostream>
using namespace std;

int main()
{
    int i, price, n;
    string text;

    cin >> i;

    switch (i)
    {
        case 1:
            cin >> price;
            cin >> n;
            cout << price * n << endl;
            break;

        case 2:
            cin >> text;
            cin >> price;
            cin >> n;
            cout << text << "!" << endl;
            cout << price * n << endl;
            break;
    }

    return 0;
}