#include<iostream>
using namespace std;

int main (){
    int A,B,D;
    char S;
    cin>>A>>S>>B;
    
    if (S=='+'){
        D=A+B;
        cout<<D<<endl;
    }
    else if (S=='-'){
        D=A-B;
        cout<<D<<endl;
    }
    else if (S=='*'){
        D=A*B;
        cout<<D<<endl;
    }
    else if (S=='/'){
        D=A/B;
        cout<<D<<endl;
    }

}