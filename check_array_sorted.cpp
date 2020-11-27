#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isArraySorted(int array[], int n)
{
    if (n == 1)
    {
        return true;
    }
    return (array[n - 1] < array[n - 2] ? false : isArraySorted(array, n - 1));
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    bool trueOrFalse = isArraySorted(a, n);
    cout << trueOrFalse << endl;

    return 0;
}