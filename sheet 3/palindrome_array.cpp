#include<iostream>
class reversing{

    private:
    int* data;
    int* arr;
    int size;

    public:
    reversing(int s){
        size = s;
    data = new int[size];
    
    }

    void inputdata(){
        for(int i = 0 ; i < size;i++){
            std::cin>>data[i];   
        }
    }bool ispalindrom = true;
    void reversing_num(){
        for(int i =0 ; i< size ; i++){//very important logic 
            //comparing the original data[i] array with it's reverse version only
            if( data[i]!=data[size-1-i]){
                ispalindrom = false;
                break;
            }
        }
        if (ispalindrom){
            std::cout<<"YES"<<std::endl;
        }else{
            std::cout<<"NO"<<std::endl;
        }
        
    }
    ~reversing(){
        delete[] data;
    }
};
int main(){
    int n;
    std::cin>>n;
    reversing myObj(n);
    myObj.inputdata();
    myObj.reversing_num();

    return 0;
}