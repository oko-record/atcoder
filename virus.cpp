#include <iostream>
#include <vector>
#include <cmath>

double distance(int x1, int y1, int x2, int y2) {
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}

void infect(const std::vector<int>& x_list, const std::vector<int>& y_list, std::vector<bool>& infected, int person, int d) {
    infected[person] = true;
    for (int other_person = 0; other_person < infected.size(); ++other_person) {
        if (!infected[other_person] && distance(x_list[person], y_list[person], x_list[other_person], y_list[other_person]) <= d) {
            infect(x_list, y_list, infected, other_person, d);
        }
    }
}

int main() {
    int n, d;
    std::cin >> n >> d;
    
    std::vector<int> x_list(n);
    std::vector<int> y_list(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> x_list[i] >> y_list[i];
    }
    
    std::vector<bool> infected(n, false);
    infect(x_list, y_list, infected, 0, d);
    
    for (int i = 0; i < n; ++i) {
        if (infected[i]) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    
    return 0;
}