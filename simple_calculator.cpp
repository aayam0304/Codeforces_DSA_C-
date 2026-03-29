#include<iostream>
using namespace std;
int main(){
    int X,Y;
    cin>>X>>Y;
    cout<<X<<" + " <<Y<<" = " <<X+Y<<endl;
    //used long long as the answer of X*Y could exceed the "int" limit
    cout<<X<<" * " <<Y<<" = " <<(long long)X*Y<<endl;
    cout<<X<<" - " <<Y<<" = " <<X-Y<<endl;
}