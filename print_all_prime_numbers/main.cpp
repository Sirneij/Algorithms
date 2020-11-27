#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//Without using sieve of Eratosthenes Time complexity O(n*sqrt(n))

bool is_prime(int n)
{
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void print_prime_numbers(int n)
{
    for (size_t i = 2; i < n; i++)
    {
        if (is_prime(i))
        {
            cout << i << "    |"
                 << "\t";
        }
    }
}

//Using sieve of Eratosthenes

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

    for (int i = 2; i < n; i++)
    {
        if (arr[i - 1] == 0)
            cout << i << "    |"
                 << "\t";
    }
}

int main()
{
    int n = 100;
    print_prime(n);
    cout << "\n"
         << "=======================================================================================================================" << endl;
    print_prime_numbers(n);
    return 0;
}
