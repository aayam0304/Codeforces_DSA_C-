#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even++;
        }else if(x%2!=0){
            odd++;
        }
        if(x>0){
            pos++;
        }else if(x<0){
            neg++;
        }
    }
    cout<<"Even:"<<" "<<even<<endl;
    cout<<"Odd:"<<" "<<odd<<endl;
    cout<<"Positive:"<<" "<<pos<<endl;
    cout<<"Negative:"<<" "<<neg<<endl;
    return 0;
}