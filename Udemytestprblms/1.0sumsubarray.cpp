// Divide and conquer method
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraysum(vector<int> arr, int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int m = n / 2;

    int leftSum = subarraysum(arr, m);
    int rightSum = subarraysum(arr + m, n - m);
    int sum = 0;
    int left = INT_MIN;
    int right = INT_MIN;
    for (int i = m; i < n; i++)
    {
        sum += arr[i];
        right = max(sum, right);
    }
    sum = 0;
    for (int i = (m - 1); i > 0; i--)
    {
        sum += arr[i];
        left = max(sum, left);
    }

    int ans = max(left, right);
    return max(ans, left, right);
}

int main()
{

    vector<int> arr = {3, -2, 5, 1};
    int n = arr.size();
    subarraysum(arr, n);
    return 0;
}