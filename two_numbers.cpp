#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    //for floor value
    int floor=A/B;
    // for ceiling value
    int f_ceil;
    int t_ceil=A%B;
    if (t_ceil==0){
        f_ceil=A/B; 
    }
    else{
        f_ceil=(A/B)+1;
    }
    // for round off values
    int t_round;
    int t_reminder=A%B;
    if (t_reminder*2>=B){
        t_round=(A/B)+1;
    }
    else{
        t_round=(A/B);
    }
    cout<<"floor "<<A<<" / "<<B<<" = "<<floor<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = "<<f_ceil<<endl;
    cout<<"round "<<A<<" / "<<B<<" = "<<t_round<<endl;
    return 0;
}