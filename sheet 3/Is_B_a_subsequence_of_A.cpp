#include<iostream>
class Subarray{

    private:
    int* data;
    int* data2;
    int size;
    int size2;

    public:
    Subarray(int s , int s2){
        size = s;
        size2 = s2;
        data = new int[size];
        data2 = new int[size2];
    }
    void inputdata(){
        for(int i = 0;i<size ;i++){
            std::cin>>data[i];
        }
        for(int i=0;i<size2;i++){
            std::cin>>data2[i];
        }
    }

    void cal(){
        int j = 0;// pointer for array B
        int i= 0;//pointer for array A
        //traversing both the array 
        while(i<size && j<size2){
            // if element match, move the pointer for array B
         if(data[i]==data2[j]){
                j++;                 
                }
            i++;
        }
        
        if(j== size2){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
    }
    ~Subarray(){
        delete[] data;
        delete[] data2;
    }
    
};

int main(){
    int n,m;
    std::cin>>n>>m;
    Subarray mycube(n,m);
    mycube.inputdata();
    mycube.cal();

    return 0;
 }