#include<iostream>
using namespace std;
int main(){
    //used long long instead of int bcz int has limited region of 2.1x10^8 and long long have 9x10^18
    long long A,B,t1,t2,sum;
    cin>>A>>B;
    // used % so we can get remender then we can sum them 
    t1=A%10;
    t2=B%10;
    sum=t1+t2;
    cout<<sum<<endl;
    return 0;
}