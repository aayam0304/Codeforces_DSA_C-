#include<algorithm>
#include<iostream>
class Max_subarray{
    private:
    int* data;
    int size;

    public:
        Max_subarray(int s){
            size = s;
            data = new int[size];
        }
        void inputdata(){
            for(int i = 0;i<size;i++){
                std::cin>>data[i];
            }
        }
        int solution(){
            for(int i = 0;i<size ;i++){
                int current_max = data[i];
                for(int j = i ; j<size ; j++){
                    current_max = std::max(current_max,data[j]);
                    std::cout<<current_max<<" ";
                }
            }
            std::cout<<std::endl;
        }
        ~Max_subarray(){
            delete[] data;
        }
};
int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
    Max_subarray myCube(n);
    myCube.inputdata();
    myCube.solution();
   
    }
    return 0;
}