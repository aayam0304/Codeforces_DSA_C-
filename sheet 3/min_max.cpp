#include<iostream>
#include<algorithm>
class m{
    private:
    int* data;
    int size;

    public:
        m(int s){
            size = s;
            data = new int[size];
        }

        void inputdata(){
            for(int i = 0; i<size ; i++){
                std::cin>>data[i];
            }
        }
        int minmax(){        
            int* min_ptr = std::min_element(data,data+size);
            int* max_ptr = std::max_element(data,data+size);

            std::swap(*min_ptr , *max_ptr);

            for(int i =0;i<size ;i++){
                std::cout<<data[i]<<" ";
            }
        }
        ~m(){
            delete[] data;
        }
};

int main(){
    int n;
    std::cin>>n;
    m myobj(n);
    myobj.inputdata();
    myobj.minmax();
}