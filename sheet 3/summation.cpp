#include<iostream>
#include<cmath>
class summation{
    private:
        int* data;
        int size;
    public:
        summation(int s){
        size = s;
        data = new int[size];
    }
        void inputdata(){
        for(int i =0 ;i<size;i++){
        std::cin>>data[i];
        }
    }
    // --- FIX: Prevent the "Double Free" crash ---
    summation(const summation&) = delete;            // Disable Copy Constructor
    summation& operator=(const summation&) = delete; // Disable Assignment Operator
        long long tsum(){
        long long total = 0;
        for(int i = 0; i<size;i++){
            total+=data[i];
        }
        return std::llabs(total);
    }
    
    ~summation(){
        delete[] data;
    }
};
int main(){
    int n;
    if (!(std::cin >> n)) return 0;

    summation myObj(n);
    myObj.inputdata();

    
    long long result = myObj.tsum(); 

    std::cout << result << std::endl;
    return 0;
}