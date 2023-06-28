#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> countMap;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        countMap[a[i]]++;
    }

    int maxElement = 0;
    int maxCount = 0;

    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxElement = pair.first;
        }
    }

    cout << maxElement << " " << maxCount << endl;

    return 0;
}