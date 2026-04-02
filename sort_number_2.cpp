#include <iostream>
#include <algorithm> // Required for sort()
using namespace std;

int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int prev1,prev2,prev3;
    prev1=arr[0];
    prev2=arr[1];
    prev3=arr[2];
    // Sorts the array from start to end
    sort(arr, arr + 3);

    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl;
    cout<<""<<endl<< prev1<<endl<<prev2<<endl<<prev3<<endl;
    return 0;
}