#include<iostream>
#include<iomanip> 
//use of iomanip to set precision in the answer instead of providing small short answer as cout provide to save storage and readable form
using namespace std;
int main(){
    //use of datatype double to print 9 consiquitive digits
    double r,pie,area;
    cin>>r;
    pie=3.141592653;
    area=pie*(r*r);
    cout<<fixed<<setprecision(9)<<area<<endl;
    return 0;
}