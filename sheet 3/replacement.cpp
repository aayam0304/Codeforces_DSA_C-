#include<iostream>
class replacement{
    private:
    int* data;
    int size;
    public:
        replacement(int s){
            size = s;
            data = new int[size];
        }
        void inputdata(){//range for input values
            for(int i = 0;i<size;i++){
                std::cin>>data[i];
            }
        }
        replacement(const replacement&) = delete;            // Disable Copy Constructor
        replacement& operator=(const replacement&) = delete; // Disable Assignment Operator
    
        int replacementofnumber(){
           for(int i=0;i<size;i++){
                if(data[i]>0){
                    std::cout<<1<<" ";
                }
                else if(data[i]==0){
                    std::cout<<0<<" ";
                }
                else{
                    std::cout<<2<<" ";
                }
            }
           std::cout<<std::endl;
        }
        ~replacement(){
            delete[] data;
        }

};
int main(){
    int n;
    std::cin>>n;
    replacement myObj(n);
    myObj.inputdata();
    myObj.replacementofnumber();
    
    return 0;
}