// Write a C++ program to find whether the given number is a prime number or not using recursion.

// SAMPLE INPUT:

// 13

// SAMPLE OUTPUT:

// 13 is a prime number

#include <iostream>
using namespace std;
int main()
{
    int x, flag = 0;
    cin >> x;
    int n = x / 2;

    for (int i = 2; i <= n; i++)
    {
        if (x % i == 0)
        {
            cout << "Not a Prime Number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Prime Number" << endl;
}