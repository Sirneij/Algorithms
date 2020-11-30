#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//Amazon: Square root of numbers
//Method 1: Time complexity O(sqrt(n))

float squareRoot(int n){
    for(float i=0.0; i<n; i++){
        if(i*i == n) return i;
        if(i*i > n) return i-1;
    }
}

//Method 2: Using Bisection search algorithm - Time complexity O(logn)

float square_root(int n){
    float epsilon = 0.01;
    float low = 0.0, high = n;
    float ans = (low+high)/2.0;
    while(abs(pow(ans, 2) - n) >= epsilon){
            if(pow(ans, 2) < n) low = ans;
            else if(pow(ans, 2) > n) high = ans;
            ans = (low+high)/2.0;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n = 27;
    //cout << squareRoot(n) << endl;
    cout << square_root(n) << endl;
    return 0;
}
