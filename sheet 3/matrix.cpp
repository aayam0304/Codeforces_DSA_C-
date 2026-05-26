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

        //for columns
        for(int i=0;i<rows;i++){
            data[i]= new int[col];
        }
    }

    int inputdata(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                std::cin>>data[i][j];
            }
        }
    }
    void cal() { // Changed return type to void since you print inside the function
        int lsum = 0; // Primary diagonal sum
        int rsum = 0; // Secondary diagonal sum

        // Single loop to accumulate both diagonals
        for (int i = 0; i < rows; i++) {
            lsum += data[i][i];               // e.g., [0][0], [1][1], [2][2]
            rsum += data[i][rows - 1 - i];    // e.g., [0][3], [1][2], [2][1]
        }

        // Get the absolute difference
        int summ = std::abs(lsum - rsum);
        std::cout << summ << std::endl;
    }
    ~matrix(){
        for(int i=0;i<rows;i++){
            delete[] data[i];
        }
        delete[] data;
    }
};

int main(){
    int n;
    std::cin>>n;
    matrix mycube(n,n);
    mycube.inputdata();
    mycube.cal();   

    return 0;
}