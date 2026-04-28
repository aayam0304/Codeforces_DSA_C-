#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int minval ,maxval;
    //maximum value
    if (A>=B && A>=C){maxval =A ;}
    else if(B>=A && B>=C){maxval = B;}
    else{maxval = C;}
    //minvalue
    if(A<=B && A<=C){minval=A;}
    else if(B<=A && B<=C){minval=B;}
    else{minval=C;}
    cout<<minval<<" "<<maxval<<endl;
    return 0;
}