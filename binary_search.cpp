#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int binarySearch(int array[], int number)
{
    int low = 0;
    int len = sizeof(array) / sizeof(array[0]);
    cout << len << endl;
    int high = len - 1;

    while (low < high)
    {
        int middle = (low + high) / 2;

        if (array[middle] == number)
        {
            return middle;
        }
        else if (array[middle] > number)
        {
            low = middle + 1;
        }
        else if (array[middle < number])
        {
            low = middle - 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int number = 5;
    int result = binarySearch(array, number);
    cout << result << endl;
    return 0;
}