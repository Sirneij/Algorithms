#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//Method 1: Linear search - Time complexity O(n); Space complexity O(1)

int linear_search(int arr[], int n, int x){

    for(size_t i=0; i<n; i++){
        if(arr[i] == x) return i;
    }
    return -1;
}

//Method 2: Binary search - Time Complexity O(logn); Space complexity O(1)

int binarySearch(int arr[], int n, int x){
    int left = 0, right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) left = mid + 1;
        else if(arr[mid]> x) right = mid - 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout << linear_search(arr, n, 9) <<endl;
    cout << binarySearch(arr, n, 5) <<endl;
    return 0;
}
