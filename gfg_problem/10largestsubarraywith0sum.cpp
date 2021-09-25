// Largest subarray with 0 sum
// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

// Example 1:

// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        map<int, int> pairSum;
        int i = -1;
        int sum = 0;
        int lenth = 0;
        pairSum.insert({sum, i});

        while (i < n - 1)
        {
            i++;
            sum += A[i];
            if (pairSum.find(sum) == pairSum.end())
            { //not found
                pairSum.insert({sum, i});
            }
            else
            {
                int len = i - pairSum[sum];
                lenth = max(lenth, len);
            }
        }
        return lenth;
    }
};

// { Driver Code Starts.

int main()
{
    int m;
    cin >> m;
    vector<int> array1(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> array1[i];
    }
    Solution ob;
    cout << ob.maxLen(array1, m) << endl;
    return 0;
}

// 8
// 15 -2 2 -8 1 7 10 23