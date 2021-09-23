#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, num;
    cout << "Enter the number : " << endl;
    cin >> n;
    int result = 0;
    while (n != 0)
    {
        num = n;
        int count = 0;
        while (num != 0)
        {   
            // cout << num << " and " << (num - 1) << " is " << (num & num - 1) << endl;
            num = num & num - 1;
            count++;
        }
        result = result + count;
        n--;
    }

    cout << result;
    // int num = n;

    // while (n != 0)
    // {
    //     cout << n % 2 << " ";
    //     n = n / 2;
    // }

    // cout << endl;
    // cout << "Number of 1's" << endl;
    // while (num != 0)
    // {
    //     cout << num << " and " << (num - 1) << " is " << (num & num - 1) << endl;
    //     num = num & num - 1;
    //     count++;
    // }
    // cout << (count);
    // int y = 4 & 3;
    // cout << y;
}