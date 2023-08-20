#include <iostream>
#include <string>

int main() {
    std::string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    
    int N;
    std::cin >> N;

    std::cout << pi.substr(0, N+2) << std::endl;
    
    return 0;
}
