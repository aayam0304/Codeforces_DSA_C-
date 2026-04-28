#include<iostream>
using namespace std;
int main(){
    int n,days,month,years;
    cin>>n;
    //provides the number of years 
    years = n/365;
    // provides the number of month remaining
    int remaining_days = n%365;
    //months from the remainder 
    month = remaining_days/30;
    //calculating days
    days=remaining_days%30;

    cout<<years<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;
    return 0;
}
