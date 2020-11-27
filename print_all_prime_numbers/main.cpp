#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void print_prime(int n)
{
    int arr[n] = {0};
    for (int i = 2; i < n; i++)
    {
        for (int j = i * i; j < n; j += i)
        {                   //j=4
            arr[j - 1] = 1; //arr[3]=true
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == 0)
            cout << i << "\t";
    }
}

int main()
{
    int n = 100;
    print_prime(n);
    return 0;
}
