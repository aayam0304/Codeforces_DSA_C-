#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a,b,c,d,start,end;
    cin>>a>>b>>c>>d;
    start = max(a,c);
    end= min(b,d);
    //is start is smaller then the end then it will have a intersection else -1
    if(start<=end){
        cout<<start<<" "<<end<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}