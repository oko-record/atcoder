#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> votes(M);
    for (int i = 0; i < M; ++i) {
        cin >> votes[i];
    }

    map<int, int> voteCounts;
    int maxVotes = 0;
    int currentWinner = 1;

    for (int i = 0; i < M; ++i) {
        voteCounts[votes[i]]++;
        if (voteCounts[votes[i]] > maxVotes ||
            (voteCounts[votes[i]] == maxVotes && votes[i] < currentWinner)) {
            maxVotes = voteCounts[votes[i]];
            currentWinner = votes[i];
        }

        cout << currentWinner << endl;
    }

    return 0;
}
