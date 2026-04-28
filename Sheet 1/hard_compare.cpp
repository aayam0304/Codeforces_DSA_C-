#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long a,b,c,d;
    double mul1 ,mul2;
    cin>>a>>b>>c>>d;
    mul1=b*log (a);
    mul2=d*log (c);

    if(mul1>mul2 ){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }return 0;
}