#include<iostream>
class Sum_digits{
    private:
    char* data;
    int* sum;
    int size;

    public:
        Sum_digits(int s){
            size = s;
            data = new char[size];
            sum = new int[size];
        }
        void inputdata(){
            for(int i =0 ;i<size ; i++){
                std::cin>>data[i];
            }
        }
        int conversion_c_t_i(){
            int temp=0;
            sum[size]= 0;
            for(int i = 0 ; i<size ;i++){
                //for(int j = 0;j<size;j++){
                    temp += data[i]-48;
                    //std::cout<<std::endl;  
            }
            std::cout<<temp;
        } 
        ~Sum_digits(){
            delete[] data;
        }
};
int main(){
    int n;
    std::cin>>n;
    Sum_digits myobj(n);
    myobj.inputdata();
   // myobj.result_sum_digits();
    myobj.conversion_c_t_i();
    return 0;
}