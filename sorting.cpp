#include<iostream>

class sorting{
    private:
    int* data;
    int size;

    public:
    sorting(int s){
        size = s;
        data = new int[size];
    }
    void inputdata(){
        for(int i = 0 ; i< size ; i++){
            std::cin>>data[i];
        }
    }
    void sorting_num(){
        for(int i = 0 ; i< size - 1;i++){
            int min_num = i;
            for(int j = i+1 ; j<size ; j++){
                if(data[j]<data[min_num])
                min_num = j;
            }
            int temp = data[min_num];
            data[min_num] = data[i];
            data[i] = temp;
        }
        
    }
    void display(){
        for(int i = 0 ;i<size ; i++){
            std::cout<<data[i]<<" ";
        }std::cout<<std::endl;
    }
    ~sorting(){
        delete[] data;
    }
};

int main(){
    int n ;
    std::cin>>n;
    sorting myObj(n);
    myObj.inputdata();
    myObj.sorting_num();
    myObj.display();
    return 0;
}