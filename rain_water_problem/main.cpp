#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int find_left_max(int arr[], int n, int i)
{
    int maximum = 0;
    for (size_t j = 0; j <= i; j++)
    {
        maximum = max(maximum, arr[j]);
    }
    return maximum;
}
int find_right_max(int arr[], int n, int i)
{
    int maximum = 0;
    for (size_t j = n - 1; j >= i; j--)
    {
        maximum = max(maximum, arr[j]);
    }
    return maximum;
}
int find_total_water(int arr[], int n)
{
    // Time complexity O(1), Space complexity O(n)
    int total_water = 0;
    for (size_t i = 1; i < n - 1; i++)
    {
        int left_max = find_left_max(arr, n, i);
        int right_max = find_right_max(arr, n, i);
        total_water += min(left_max, right_max) - arr[i];
    }

    return total_water;
}

int main()
{
    int arr[] = {3, 0, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find_total_water(arr, n) << endl;
    return 0;
}