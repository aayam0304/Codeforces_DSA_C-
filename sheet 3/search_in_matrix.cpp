#include<iostream>
class matrix{
    private:
    int** data;
    int rows;
    int col;
    

    public:
    matrix(int r , int c){
       
        rows = r;
        col = c;
        data = new int*[rows];
        //allocating the columns 
        for(int i = 0 ;i<rows ;i++){
            data[i]= new int[col];
        }
    }

    void inputdata(){
        for(int i = 0; i<rows ;i++){
            for(int j = 0;j<col;j++){
                    std::cin>>data[i][j];
            }
        }
    }

    int calculattion(){
        int k;
        bool real = false;
        std::cin>>k;
        for(int i = 0 ;i<rows ;i++){
            for(int j = 0;j<col ;j++){
                if(k==data[i][j]){
                   real = true;
                   break;
                }
            }
        }
        if(real){
            std::cout<<"will not take number";
        }
        else{
            std::cout<<"will take number";
        }
    }
    ~matrix(){
        for(int i = 0;i<rows ;i++){
            delete[] data[i];
        }
        delete[] data;
    }
};

int main(){
    int n,m;
    std::cin>>n>>m;
    matrix myCube(n,m);
    myCube.inputdata();
    myCube.calculattion();

    return 0;
}