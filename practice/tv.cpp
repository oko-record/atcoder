#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int channel;
    string stationName;

    cout << "チャンネル番号を入力してください。";
    cin >> channel;
    
    switch (channel)
    {
        case 1:
            stationName = "TBS";
            break;
        case 2:
            stationName = "Eテレ";
            break;
        case 3:
        stationName = "NHK総合";
        break;
        case 5:
            stationName = "STV";
    }

    cout << stationName << endl;

    return 0;
}