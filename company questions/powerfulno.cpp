#include <bits/stdc++.h>
using namespace std;

int divisionsum(long long int n)
{
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    return sum;
}

int length(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int main()
{

    // int n = 5;
    // int arr[] = {41,30,49,48,7};
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        long long int x = pow(2, arr[i]);
        int l = length(x);
        if (l == 1)
        {
            cout << x;
        }
        else
        {
            int y = divisionsum(x);
            l = length(y);
            while (l != 1)
            {
                y = divisionsum(y);
                l = length(y);
            }
            cout << y << endl;
        }
    }
    // long long int x = pow(2, 56);
    // cout << x;
    return 0;
}

// input
// 5
// 56 53 21 18 2
// output
// 4
// 5
// 8
// 1
// 4