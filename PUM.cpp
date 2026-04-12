#include<iostream>
int main(){
    int n;
    std::cin>>n;
        for(int i=1;i<=n*4;i++){
            if(i%4==0){
                std::cout<<"PUM"<<std::endl;
            }
            else{
                std::cout<<i<<" ";
            }
         
        }
    return 0;
}