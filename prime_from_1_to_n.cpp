#include<iostream>
int main(){
    int n;
    std::cin>>n;
    //first for loop to run number from 2 to nth point
    for(int i=2;i<=n;i++){
        // boolen is used to see weather the asked value is true or false
        bool isprime = true;
        //2nd loop is for checking for prime number
        for(int j=2;j*j<=i;j++){
            if(i%j==0){// if i%j==0 then that means i as number can be divisible by any other number means not prime 
                isprime=false;
                break;
            }
        }
        if(isprime){
        std::cout<<i<<" ";
    }
    }
    return 0;
}