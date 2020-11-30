#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long sumUnderModulo(long long a, long long b)
{
    const unsigned int M = 1000000007;
    long long sum = a + b;
    return (sum%M);
}

int main(int argc, const char **argv)
{
    long long a = 1000000007;
    long long b = 1000000007;
    cout << sumUnderModulo(a, b) << endl;
    return 0;
}
