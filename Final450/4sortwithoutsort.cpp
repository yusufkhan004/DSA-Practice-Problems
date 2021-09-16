// Sort an array of 0s, 1s and 2s
// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// for E.g.

// Input:
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated
// into ascending order.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int count0 = 0, count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {

            if (a[i] == 0)
                count0++;
            if (a[i] == 1)
                count1++;
            if (a[i] == 2)
                count2++;
        }

        for (int i = 0; i < count0; i++)
            a[i] = 0;
        for (int i = count0; i < count0 + count1; i++)
            a[i] = 1;
        for (int i = count0 + count1; i < count0 + count1 + count2; i++)
            a[i] = 2;
    }
};

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the array values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}