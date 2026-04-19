#include<iostream>
class searching{
    private:
    int* data;
    int size;
    public:
        searching(int s){
        size =  s;
        data = new int[size];
     }
        void inputdata(){
            for(int i = 0 ; i< size; i++){
                std::cin>>data[i];
            }
        }
        searching(const searching&) = delete;            // Disable Copy Constructor
        searching& operator=(const searching&) = delete; // Disable Assignment Operator
    
        int indexsearching(){
            int m;
            std::cin>>m;
            for(int i = 0 ; i< size ;++i){
                if(data[i]==m){
                    return i;
                } 
            }return -1;
        }
            
        ~searching(){
            delete[] data;
        }
    };//always remeber to ass this " ; " after the class is closed 
int main(){
    int n;
    std::cin>>n;
    searching myObj(n);
    myObj.inputdata();

    int result = myObj.indexsearching();
    std::cout<<result;
    return 0;
}