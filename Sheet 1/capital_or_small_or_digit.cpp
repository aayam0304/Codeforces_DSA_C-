#include<iostream>
using  namespace std;

int main(){
    char x;
    cin>>x;
    if(x>='A' && x<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(x>='a' && x<='z'){ 
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if( x>='0' && x<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}