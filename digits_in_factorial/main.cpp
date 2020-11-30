#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//Calculates the factorial


long double factorial(int n)
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

long digitsInFactorial(int N){
    long double fact = factorial(N);
    return floor(log10(fact) + 1);
}
int main(int argc, const char **argv)
{
    int n = 8468;
    cout << "The number of digits in " << factorial(n) << " is: " << digitsInFactorial(n) << endl;
    return 0;
}
