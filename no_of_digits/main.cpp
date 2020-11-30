#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//Method 1: Using a counter - Time complexity O(count)

int find_digits(int n){
    int counter = 0;
    while(n != 0){
        counter += 1;
        n /= 10;
    }
    return counter;
}

//Method 2: Using pure mathematics - Time complexity O(1)
int find_no_of_digits(int n){
    return floor(log10(n) + 1);
}

int main(int argc, const char **argv)
{
    int n = 2020;
    cout << "The number of digits using counter is: " << find_digits(n) << "." <<endl;
    cout << "The number of digits is: " << find_no_of_digits(n) << "." <<endl;
    return 0;
}
