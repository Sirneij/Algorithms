#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    // Time complexity O(1), Space complexity O(n)
    return (n * (n + 1)) / 2;
}

int main()
{
    int n = 12;
    cout << sum(n) << endl;
    return 0;
}