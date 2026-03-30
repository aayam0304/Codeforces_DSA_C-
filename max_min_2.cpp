#include<iostream>
#include<algorithm>// mostly used for min and max
using namespace std;
int main(){
int A,B,C;
cin>>A>>B>>C;
//finding absolute min and max number from the 3 number
int smallest =min({A,B,C});
int largest = max({A,B,C});

cout<<smallest<<" "<<largest<<endl;
return 0;
}