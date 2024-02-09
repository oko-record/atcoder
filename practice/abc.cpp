#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, int> dict;
    dict["A"] = 0;
    dict["B"] = 3;
    dict["C"] = 4;
    dict["D"] = 8;
    dict["E"] = 9;
    dict["F"] = 14;
    dict["G"] = 23;

    string p, q;
    cin >> p >> q;
    if (dict[p] - dict[q] < 0)
    {
        cout << dict[q] - dict[p] << endl;
    }
    else
    {
        cout << dict[p] - dict[q] << endl;
    }

}
