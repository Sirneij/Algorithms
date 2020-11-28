#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    long long result = factorial(50);
    cout << "The factorial is: " << result << endl;
}