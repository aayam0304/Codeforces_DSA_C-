#include<iostream>
int main(){
    int n;
    std::cin>>n;
    //study again n again
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    return 0;
}