#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> c(3, std::vector<int>(3));

    // Input
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> c[i][j];
        }
    }

    // Calculate the probability of disappointment for each row, column, and diagonal
    double disappointment_prob = 0.0;

    // For rows
    for (int i = 0; i < 3; ++i) {
        if (c[i][0] == c[i][1] && c[i][0] != c[i][2]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
        if (c[i][0] == c[i][2] && c[i][0] != c[i][1]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
        if (c[i][1] == c[i][2] && c[i][1] != c[i][0]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
    }

    // For columns
    for (int j = 0; j < 3; ++j) {
        if (c[0][j] == c[1][j] && c[0][j] != c[2][j]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
        if (c[0][j] == c[2][j] && c[0][j] != c[1][j]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
        if (c[1][j] == c[2][j] && c[1][j] != c[0][j]) {
            disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
        }
    }

    // For diagonals
    if (c[0][0] == c[1][1] && c[0][0] != c[2][2]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }
    if (c[0][0] == c[2][2] && c[0][0] != c[1][1]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }
    if (c[1][1] == c[2][2] && c[1][1] != c[0][0]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }
    if (c[0][2] == c[1][1] && c[0][2] != c[2][0]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }
    if (c[0][2] == c[2][0] && c[0][2] != c[1][1]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }
    if (c[1][1] == c[2][0] && c[1][1] != c[0][2]) {
        disappointment_prob += 2.0 / 6.0;  // 2/3 * 1/3
    }

    // Calculate the non-disappointment probability
    double non_disappointment_prob = 1.0 - disappointment_prob;

    // Output
    std::cout << non_disappointment_prob << std::endl;

    return 0;
}
