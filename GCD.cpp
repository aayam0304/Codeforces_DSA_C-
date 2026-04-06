#include<iostream>
#include<algorithm>
int main(){
        int a,b;
        std::cin>>a>>b;
        //as we know the GCD can't be bigger than the smallest of two number
        int s = std::min(a,b);
        //loop for finding the GCD
        for(int i =s ;i>=1;i--){
            //checking is the i is divisible by both a and b
            if(a%i==0 && b%i==0){
                std::cout<<i<<std::endl;
            break;
            }
         }
    return 0;
}