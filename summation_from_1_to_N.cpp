#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    //we useed the n*(n+1)/2 as the last number could be bigger then long size 9x10^18
    long long sum=n*(n+1)/2;
    cout<<sum<<endl;
}