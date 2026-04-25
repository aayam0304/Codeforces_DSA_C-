#include<iostream>
#include<cmath>
class Lucky_array{
    private:
    int* data;
    int size;

    public:
        Lucky_array(int s){
            size = s;
            data = new int[size];
        }
        void inputdata(){
            for(int i = 0; i<size;i++){
                std::cin>>data[i];
            }
            int min_val = data[0];
            for(int i = 1 ; i<size ; i++){
                if(data[i]< min_val){
                    min_val = data[i];
                }
            }
            int count = 0;
             for(int i = 0; i < size; i++){
               if(data[i]== min_val){
                count++;
               } 
            }
            if(count%2!=0){
                std::cout<<"Lucky"<<std::endl;
            }
            else{
                std::cout<<"Unlucky"<<std::endl;
            }
        }

};
int main(){
    int n;
    std::cin>>n;
    Lucky_array myobj(n);
    myobj.inputdata();
    return 0;
}