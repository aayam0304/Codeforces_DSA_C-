#include<iostream>
class position{
     private:
     int* data;
     int size;
     public: 
        position(int s){
            size = s;
            data = new int[size];
        }
        void inputdata(){
            
            for(int i = 0;i< size; i++){
                std::cin>>data[i];
            }
        }
        position(const position&) = delete;            // Disable Copy Constructor
        position& operator=(const position&) = delete; // Disable Assignment Operator
    
        int positiondec(){
            for(int i=0 ; i<size;i++){
              if(data[i]>10){
                continue;
              }  std::cout<<"A"<<"["<<i<<"]"<<" = "<<data[i]<<std::endl;
            }
        }
          ~position(){
                delete[] data;
            }
};
int main(){
    int n;
    std::cin>>n;
    position myObj(n);
    myObj.inputdata();
    myObj.positiondec();

    return 0;
}