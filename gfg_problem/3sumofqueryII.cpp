// Sum of Query II
// You are given an array arr[] of n integers and q queries in an array queries[] of length 2*q containing l, r pair for all q queries. You need to compute the following sum over q queries.

// Array is 1-Indexed.

// Example 1:

// Input: n = 4
// arr = {1, 2, 3, 4}
// q = 2
// queries = {1, 4, 2, 3}
// Output: 10 5
// Explaination: In the first query we need sum
// from 1 to 4 which is 1+2+3+4 = 10. In the
// second query we need sum from 2 to 3 which is
// 2 + 3 = 5.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        vector<int> p;
        int sumq[n + 1];

        sumq[0] = 0;

        for (int i = 0; i < n; i++)
        {
            sumq[i + 1] = sumq[i] + arr[i];
        }

        for (int i = 0; i < q * 2; i += 2)
        {
            int sum = 0;
            int l = queries[i];
            int r = queries[i + 1];
            sum = sumq[r] - sumq[l - 1];
            p.push_back(sum);
        }

        return p;
    }
};

int main()
{

    int n, q;
    // cin>>n;
    n = 4;
    int arr[n] = {1, 2, 3, 4};
    q = 2;
    int queries[2 * q] = {1, 4, 2, 3};
    // int arr[n];

    // for(int i = 0;i < n;i++)
    //     cin>>arr[i];
    // cin>>q;
    // int queries[2*q];
    // for(int i = 0;i < 2*q;i += 2)
    //     cin>>queries[i]>>queries[i+1];

    Solution ob;
    vector<int> ans = ob.querySum(n, arr, q, queries);
    for (int u : ans)
        cout << u << " ";
    cout << endl;

    return 0;
}

// 4
// 1 2 3 4
// 2
// 1 4 2 3