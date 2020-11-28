#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//Method 1: O(n) Time complexity; O(d) space complexity
void rotate_array(int arr[], int n, int d){
    int temp[d];
    for(size_t i=0; i < d; i++){//Copies the array at index i=0 to d into temp array
        temp[i] = arr[i];
    }

    for(size_t i=0; i <n-d ; i++){ //Shift the remaining array elements forward
        arr[i] = arr[i+d];
    }

    for(size_t i=n-d,j=0; i < n, j<d; i++, j++){ //appending temp array to arr
        arr[i] = temp[j];
    }
    for(size_t i = 0; i < n; i++){//prints the array element
        cout << arr[i] << "\t";
    }
    cout << endl;

}

//Method 2: Time complexity: O(n*d), Space complexity:O(1)

void rotate(int arr[], int n){
    int temp  = arr[0];
    for(size_t i =0; i<= n-1; i++){//Shifts the array assigning the
        arr[i] = arr[i+1];//assigns the next element to the previous element
    }
    arr[n-1]= temp;//assigns the element at the last array index to temp
}

void rotateArray(int arr[], int n, int d){
    for(size_t i = 0; i<d; i++){
        rotate(arr, n);
    }
    for(size_t i=0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr, n, 4);
    return 0;
}
