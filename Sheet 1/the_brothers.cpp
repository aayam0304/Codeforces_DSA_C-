#include<iostream>
#include<string>
using namespace std;

int main(){
string F1,S1,F2,S2;
cin>>F1>>S1;
string surname1=S1;
cin>>F2>>S2;
string surname2=S2;
if (surname1==surname2){
    cout<<"ARE Brothers"<<endl;
}
else{
    cout<<"NOT"<<endl;
}
return 0;
}
