#include<iostream>

int main(){
    int n;
    std::cin>>n;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
           
            // 1. Check for the absolute center first
            if (i == j && (i + j) == (n - 1)) {
                std::cout << "X";
            }
            // 2. Check for the main diagonal (Top-Left to Bottom-Right)
            else if (i == j) {
                std::cout << "\\"; // Note: '\\' is used to print a single backslash
            }
            // 3. Check for the anti-diagonal (Top-Right to Bottom-Left)
            else if ((i + j) == (n - 1)) {
                std::cout << "/";
            }
            // 4. Fill everything else with stars
            else {
                std::cout << "*";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}