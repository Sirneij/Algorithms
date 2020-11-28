#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int no_of_substrings(int n)
{
    return ((n * (n + 1)) / 2);
}

void substrings(string s, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j <= n - i; j++)
        {
            cout << s.substr(i, j) << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    string name = "John";
    int n = name.length();
    cout << name << " has " << no_of_substrings(n) << " sunstrings." << endl;
    cout << "The substrings of " << name << " are: \n";
    substrings(name, n);
    return 0;
}
