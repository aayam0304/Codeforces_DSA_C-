#include<iostream>
#include<algorithm>
int main(){
    long long x,y;
    while(std::cin>>x>>y && x>0 && y>0){
        long long sum=0;// this will reset the sum for every loop
        long long start = std::min(x,y);// this will let the user enter the min and max num
        long long  end= std::max(x,y);
        
        for(int i=start ;i<=end;i++){
        sum+=i;
        std::cout<<i<<" ";
       }std::cout<<" "<<"sum"<<" ="<<sum<<std::endl; 
   }
    return 0;
}