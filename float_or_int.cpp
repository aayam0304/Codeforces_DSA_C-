#include<iostream>
using namespace std;
int main(){
    double input;
    cin>>input;
    int int_part= (int)input;
    double deci_part = input - int_part;

    if (int_part>0 && deci_part == 0){
        cout<<"int"<<" "<<int_part<<endl;
    }
    else if (int_part >0 && deci_part > 0){
        cout<<"float"<<" "<<int_part<<" "<<deci_part<<endl;
    }
    return 0;

}