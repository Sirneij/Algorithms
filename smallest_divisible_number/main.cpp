#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long getSmallestDivNum(long long n)
{
    long long ans = 1;
    for (size_t i = 1; i <= n; i++)
    {
        ans = (ans * i / gcd(ans, i));
    }
    return ans;
}

int main(int argc, const char **argv)
{
    long long n = 3;
    cout << getSmallestDivNum(n) << endl;
    return 0;
}
