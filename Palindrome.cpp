#include<iostream>
#include<string>
#include<algorithm>
int main(){
    std::string n;
    std::cin>>n;
    //converting n as int into string to reverse 
    //std::string x = std::to_string(n);
    //reversing the x 
    std::string x = n;
    std::reverse(x.begin(),x.end());
    //convert string into int 
    int x_num= std::stoi(x);
    if(n==x){
        std::cout<<x_num<<std::endl;
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<x_num<<std::endl;
        std::cout<<"NO"<<std::endl;
    }    
    return 0;

}