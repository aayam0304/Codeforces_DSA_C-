#include<iostream>
int main(){
    long long n,f1,f2;
    std::cin>>n;
    f1=0;
    f2=1;
    if(n==1){
        std::cout<<f1;
    }
    if(n>=2){
        std::cout<<f1;
      std::cout<<" "<<f2;
        for(int i = f2;i<n-1;++i){
        long long final = 0 ;
        final = f1+f2;
        f1=f2;
        f2=final;
        std::cout<<" "<<final;
       }
    }
   
    return 0;
}