#include<iostream>
#include<algorithm>
int main(){
    int m;
    std::cin>>m;
    for(int i=0;i<m;i++){
        long long x,y,start,end;
        std::cin>>x>>y;
        long long sum = 0;
        start= std::min(x,y);
        end=std::max(x,y);

        for(int j=start+1;j<end;j++){
            if (j%2!=0){
                sum+=j;
            }
        }std::cout<<sum<<std::endl;
    }
    return 0;
}