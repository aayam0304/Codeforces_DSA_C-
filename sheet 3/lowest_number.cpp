#include<iostream>

class lowestnumber{
    private:
       int* data;
       int size;
    public:
    lowestnumber(int s){
        size = s;
        data = new int[size];
       }
    void inputdata(){
        for(int i = 0; i<size ; i++){
            std::cin>>data[i];
        }
       }
    lowestnumber(const lowestnumber&) = delete;            // Disable Copy Constructor
    lowestnumber& operator=(const lowestnumber&) = delete; // Disable Assignment Operator
   
   
   
    int lowerest_number_dec(){
        int minval = data[0];
        int minpos = 0;
        for(int i = 0 ; i<size; i++){
        if(data[i]< minval){
            minval = data[i];
            minpos = i;// this will provide us the posiiton of the number
        }
        }std::cout<<minval<<" "<<minpos+1<<std::endl;
       }
    ~lowestnumber(){
        delete[] data;
    }
};
int main(){
    int n;
    std::cin>>n;
    lowestnumber myObj(n);
    myObj.inputdata();
    myObj.lowerest_number_dec();

    return 0;
}