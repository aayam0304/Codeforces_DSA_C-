#include<iostream>
class nums{
    private:
    int* data;
    int size;

    public:
    nums(int s){
        size = s;
        data = new int[size];
    }
    void inputdata(){
        for(int i =0 ;i<size ;i++){
            std::cin>>data[i];
        }
    }

    //int calculation_num(){
        //int count = 0;
        //int f_count;

        //bool count_loop = true;
        //while(count_loop){
          //  bool changed = false;//track if we divided anything or not
            //for(int i =0; i<size;i++){
              //  if(data[i]!=0 && data[i]%2 == 0){
                //    count++;

                  //  int temp = 0;
                    //int div = 0;

                    //temp = data[i];
                   // data[i]=0;
                   // div = temp /2 ;
                   // data[i]= div;
                   // changed = true;
               // }
       // }
        //if no even numbers are found in the aaray 
    //if(!changed){
     //   count_loop = false;
   // }
   // }
    //f_count = count / size;
    //std::cout<<f_count;
  //  return f_count;//added required return statement
//}// as in the last logic we were calculating on the bassis of the division now in this logic we are calculating on the basis of the rounds
int calculation_num() {
    int operations = 0;

    while (true) {
        // Step 1: Check if ALL numbers are even
        for (int i = 0; i < size; i++) {
            if (data[i] % 2 != 0) {
                // As soon as we find one odd number, we stop everything
                std::cout << operations << std::endl;
                return operations;
            }
        }

        // Step 2: If we reached here, they are all even. 
        // Divide each of them by 2.
        for (int i = 0; i < size; i++) {
            data[i] /= 2;
        }

        // Step 3: Increment the operation count
        operations++;
    }
}
    ~nums(){
        delete[] data;
    }
   
};

int main(){
int n;
std::cin>>n;
nums myCube(n);
myCube.inputdata();
myCube.calculation_num();
return 0;
}