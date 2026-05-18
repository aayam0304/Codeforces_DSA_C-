#include<iostream>
class permutation{
    private:
    int* data;
    int* data2;
    int size;

    public:
    permutation(int s){
        size = s;
        data = new int[size];
        data2 = new int[size];
    }

    void inputdata(){
        for(int i = 0; i<size ; i++){
            std::cin>>data[i];
        }
        for(int i = 0 ;i<size ; i++){
            std::cin>>data2[i];
        }
    }

    int calculattion(){
         int temp = 0 ;
         int temp2 = 0;
        for(int i = 0;i<size ;i++){
            temp+= data[i];
        }
        for(int i = 0;i<size ;i++){
            temp2+= data2[i];
        }
        if(temp == temp2){
            std::cout<<"yes"<<std::endl;
        }
        else{
            std::cout<<"no"<<std::endl;
        }
    }
    ~permutation(){
        delete[] data;
        delete[] data2;
    }
};

int main(){
    int n;
    std::cin>>n;
    permutation myCube(n);
    myCube.inputdata();
    myCube.calculattion();

    return 0;
}