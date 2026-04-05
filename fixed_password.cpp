#include<iostream>
int main(){
    int x;
    while(std::cin>>x){
        if(x==1999){
            std::cout<<"Correct"<<std::endl;
            break;
        }else{
            std::cout<<"Wrong"<<std::endl;
        }
    }
    return 0;

}