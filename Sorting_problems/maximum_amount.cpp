#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int get_max_number_of_elements_to_be_purchased(int arr[], int n, int k){
    if(n==0 || k==0){
        return 0;
    }
    int ans = 0;
    sort(arr, arr+n); //O(nlogn)
    int i=0;
    while(i < n && k > arr[i]){
        ans++;
        k = k - arr[i];
        i++;
    }
    return ans;
}

int main(int argc, const char** argv) {
    int arr[]={1,5,12,111,300,210,12,9,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=50;
    cout << "The maximum number of items that can be purchased with " << k << " is: " << get_max_number_of_elements_to_be_purchased(arr, n,k) <<endl;
    return 0;
}
