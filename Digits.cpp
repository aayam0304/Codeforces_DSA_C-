#include<iostream>
#include<string>
#include<algorithm>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        //check weather it is 0 or not
        do{//used do as it will run atleast onces weather the n value is 0 or not 
            std::cout<<n%10;
            n/=10;
            if(n>0){
                std::cout<<" ";
            }
        }while(n>0);// while would check if n is greater then 0 or not
        std::cout<<std::endl;
    }
    return 0;
}