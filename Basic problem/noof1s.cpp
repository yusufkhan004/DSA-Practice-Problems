// Example:
// n = 23 = {10111}2 .
// 1. Initially, count = 0.
// 2. Now, n will change to n&(n-1). As n-1 = 22 = {10110}2 , then n&(n-1) will be {101112 & {10110}2, which will be {10110}2 which is equal to 22. Therefore n will change to 22 and count to 1.
// 3. As n-1 = 21 = {10101}2 , then n&(n-1) will be {10110}2 & {10101}2, which will be {10100}2 which is equal to 20. Therefore n will change to 20 and count to 2.
// 4. As n-1 = 19 = {10011}2 , then n&(n-1) will be {10100}2 & {10011}2, which will be {10000}2 which is equal to 16. Therefore n will change to 16 and count to 3.
// 5. As n-1 = 15 = {01111}2 , then n&(n-1) will be {10000}2 & {01111}2, which will be {00000}2 which is equal to 0. Therefore n will change to 0 and count to 4.
// 6. As n = 0, the the loop will terminate and gives the result as 4.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int count = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << "Binary representation of " << n << endl;

    int num = n;

    while (n != 0)
    {
        cout << n % 2 << " ";
        n = n / 2;
    }

    cout << endl;
    cout << "Number of 1's" << endl;
    while (num != 0)
    {
        cout << num << " and " << (num - 1) << " is " << (num & num - 1) << endl;
        num = num & num - 1;
        count++;
    }
    cout << (count);
    // int y = 4 & 3;
    // cout << y;
}