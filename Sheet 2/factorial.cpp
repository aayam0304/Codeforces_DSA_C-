#include<iostream>
int main(){
    //t hold the number of element we will want to have factorial of
    int t;
    std::cin>>t;
    //using while(t--) ; this will execute till t is completely 0 /null ; t-- this will decrement after the while is executed for onces and will dec after every execution 
    while(t--){
        //n hold elements 
        int n;
        std::cin>>n;
        // took long long as it will hold 1.8x10^8 elements as 20!
        long long fac=1;
        for(int i=1;i<=n;++i){
            // factorial =i*(i+1)
        fac*=i;
        }
     std::cout<<fac<<"\n";
    }
        return 0;
}