#include<iostream>
int main(){
    int n;
    std::cin>>n;
    //checking if the first limit is true or not
    if(n<2){
        std::cout<<"NO"<<std::endl;
        return 0;
    }
    //putting a boolen to check
    bool isprime = true;
    //isprime variable checks weather the condition inside the for loop is true or false
    for(int i=2 ;i*i<=n;i++){
        if(n%i==0){
            isprime = false;
            break;
            }
    }
    if(isprime){
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }
    return 0;
}