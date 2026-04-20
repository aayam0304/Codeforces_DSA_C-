#include<iostream>
class reversing{

    private:
    int* data;
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
    }
    void reversing_num(){
        for(int i = size-1 ; i>=0; i--){//used size -1 which will help in to start from first num , i >= 0 which tells that the array should be empy ; i-- which represent that the array will decrease step by step

            std::cout<<data[i]<<" ";
        }std::cout<<std::endl;
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