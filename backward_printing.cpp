#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int printBackwards(int n)
{
    if (n == 0)
    {
        cout << 0 << "." << endl;
        return 0;
    }
    else
    {
        cout << n << ", ";
        return printBackwards(n - 1);
    }
}

int main()
{
    printBackwards(50);
}