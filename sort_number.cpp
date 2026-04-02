#include<iostream>
using namespace std;
int main(){
    int A,B,C,smallest_n,mid_n,biggest_n;
    cin>>A>>B>>C;
    if(A<=B && A<=C){
        smallest_n =A;
        if(B<=C){
            mid_n=B;
            biggest_n=C;
        }else{
            mid_n=C;
            biggest_n=B;
        }
    }else if(B<=A && B<=C){
        smallest_n =B;
        if(A<=C){
            mid_n=A;
            biggest_n=C;
        }else{
            biggest_n=A;
            mid_n=C;
        }
    }else{
        smallest_n=C;
        if(A<=B){
            mid_n=A;
            biggest_n=B;
        }else{
            mid_n=B;
            biggest_n=A;
        }
        
    }
    cout<<smallest_n<<endl;
    cout<<mid_n<<endl;
    cout<<biggest_n<<endl;
    cout<<""<<endl;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0 ;
}