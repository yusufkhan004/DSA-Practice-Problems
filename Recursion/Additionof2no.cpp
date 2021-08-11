// INPUT & OUTPUT FORMAT:

// The input corresponds to the value of n. The output corresponds to the sum of the values up to n.

// SAMPLE INPUT & OUTPUT:

// 5

// 15

#include <iostream>
using namespace std;

int sum(int n);

int main()
{
    int n;
    cin >> n;
    cout << sum(n);
}

int sum(int n)
{
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}