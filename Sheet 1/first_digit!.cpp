#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin>>n;
    //accessing the first number as it is a string
    char f_ch=n[0];
    //converting into int and checking for first to bve odd ot even
    int f_n=f_ch;
    if (f_n%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    return 0;
    //cout<<f_ch<<endl;
}