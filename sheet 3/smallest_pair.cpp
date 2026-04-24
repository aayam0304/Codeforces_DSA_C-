#include<iostream>
#include<climits>
class smallest_pair{
       private:
       int* data;
       int size;

       public:
        smallest_pair(int s){
            size = s;
            data = new int[size];
        }

        void inpudata(){
            for(int i=0 ;i<size ; i++){
                std::cin>>data[i];
            }
        }
       
        int smallernum(){
             //initializing a variable with very large number
        long long minr = LLONG_MAX;

            for(int i = 0 ; i<size-1 ; i++){
                for(int j = i+1 ; j <size ; j++){
                //the formula ai+aj+j-1()
                long long currentval = (long long)data[i]+data[j]+(j-i);
                
                if(currentval < minr){
                    minr=currentval;
                }
              }
            }
            std::cout<<minr<<std::endl;
        }
    ~smallest_pair(){
        delete[] data;
    }
};
int main(){
    int t;
    if(!(std::cin>>t))return 0;


    while(t--){
    int n;
    if (!(std::cin >> n)) break;
    smallest_pair myobj(n);
    myobj.inpudata();
    myobj.smallernum();
    }
   
    return 0;
}