#include <iostream>
#include <iomanip>
 
int main() {
    double X, P;
    if (std::cin >> X >> P) {
        double originalPrice = P / (1 - (X / 100.0));
        std::cout << std::fixed << std::setprecision(2) << originalPrice << std::endl;
    }
    return 0;
}
