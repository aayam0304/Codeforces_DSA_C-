#include<iostream>
int main(){
    char s;
    std::cin>>s;
    int l;
    std::cin>>l;
    for(int i =0;i<l;i++){
        int m;
        std::cin>>m; 
        for(int j =0; j<m;j++){
            std::cout<<s;
        }
        std::cout<<std::endl;
    }
    return 0;
}