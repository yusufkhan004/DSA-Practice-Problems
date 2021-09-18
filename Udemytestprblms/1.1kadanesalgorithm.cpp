// Using kadanes algorithm
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarraysum(vector<int> arr, int n)
{
    int ans = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > 0)
        {
            sum += arr[i];
        }
        else
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }

    if (sum == 0)
    {
        return 0;
    }
    return ans;
}

int main()
{

    vector<int> arr = {-1, 2, 3, 4, -2, 6, -8, 3};
    int n = arr.size();
    int max = subarraysum(arr, n);
    cout << max;
    return 0;
}