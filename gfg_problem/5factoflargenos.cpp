// Factorials of large numbers 

// Given an integer N, find its factorial.

// Example 1:

// Input: N = 5
// Output: 120
// Explanation : 5! = 1*2*3*4*5 = 120

// Example 2:

// Input: N = 10
// Output: 3628800
// Explanation :
// 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

// Your Task:
// You don't need to read input or print anything. Complete the function factorial() 
// that takes integer N as input parameter and returns a list of integers denoting the 
// digits that make up the factorial of N.



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> factorial(int N)
    {

        // to store the value of array
        vector<int> res;

        res.push_back(1);

        for (int i = 2; i <= N; i++)
        {
            int carry = 0;
            //getting size of the array
            for (int j = 0; j < res.size(); j++)
            {
                int fact = res[j] * i + carry;
                res[j] = fact % 10;
                carry = fact / 10;
            }
            //if carry remains then append it to the end of the array
            while (carry != 0)
            {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    int N;
    cin >> N;
    Solution ob;
    vector<int> result = ob.factorial(N);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i];
    }
    cout << endl;
    return 0;
}

//869