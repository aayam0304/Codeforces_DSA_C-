#include<iostream>
int main(){
    int t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        //iterate till we get the array
        for(int i =s.length();i>=0;i--){
            std::cout<<s[i];
            //print a space after evey element
            if(i>0){
                std::cout<<" ";
             }
       }std::cout<<std::endl;
    }
    return 0;
}