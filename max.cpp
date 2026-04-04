#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,maximum;
    //initializing maximum with 0 
    maximum =0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        //this compares the previous number then compare new ones then finalizes the answer
        maximum = max(maximum,m);
    }
    cout<<maximum<<endl;
    return 0;
}