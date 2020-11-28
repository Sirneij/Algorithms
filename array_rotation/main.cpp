#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//Method 1: O(n) Time complexity
void rotate_array(int arr[], int n, int d){
    int temp[d];
    arr[n] = {0};
    for(size_t i=0; i < d; i++){
        temp[i] = arr[i];
        cout << temp[i] << "\t";
    }
    cout << endl;
    for(size_t i=0; i <n-d ; i++){
        arr[i] = arr[i+d];
        cout << arr[i] << "\t";
    }
    cout << endl;
    for(size_t i=n-d,j=0; i < n, j<d; i++, j++){
        arr[i] = temp[j];
    }
    for(size_t i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;

}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate_array(arr, n, 4);
    return 0;
}