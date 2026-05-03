#include<iostream>
class fibonacci{
    private:
    long long* data;
    int size;

    public:
        fibonacci(int s){
            size = s;
            data = new long long[size+1];// to handle 1 based indexing
        }
        ~fibonacci(){
            delete[] data;
        }

        void calculator(){
            if(size>=1)data[1]=0;
            if(size>=2)data[2]=1;  
    }
        int fibonacci_num(){
            for(int i = 3; i<=size ;i++){
                data[i]=data[i-1]+data[i-2];
                }
        std::cout<<data[size]<<std::endl;
    }
};

int main(){
    int n;
    std::cin>>n;

    fibonacci myobj(n);
    myobj.calculator();
    myobj.fibonacci_num();
    return 0;
}