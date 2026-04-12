#include<iostream>
int main(){
    int m;
    std::cin>>m;
    for(int i= 1 ; i<=m; i++){
        for(int j =1 ; j<=m-i ; j++){
            std::cout<<" ";
            }
        for(int k=1;k<=(2*i-1);k++){ 
                std::cout<<"*";    
        }
        std::cout<<std::endl;
    }
    for(int i= m ; i>=1; i--){
        for(int j =1 ; j<=m-i ; j++){
            std::cout<<" ";
            }
        for(int k=1;k<=(2*i-1);k++){ 
                std::cout<<"*";    
        }
        std::cout<<std::endl;
    }
    return 0;
}