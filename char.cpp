#include<iostream>
using namespace std;
int main(){
    char aplha;
    cin>>aplha;
    if(aplha >= 'A' && aplha <='Z'){
        // as uppercase start from 65 we add 32 to convert lowerr tpo upper 
        aplha =aplha+32;
    }
    else if (aplha >= 'a' && aplha <= 'z'){
    // as loweercase start from 97 so we subtracted 32 to reach back to 65 aplha
        aplha=aplha-32;
    }
    cout<<aplha<<endl;
    return 0;
}