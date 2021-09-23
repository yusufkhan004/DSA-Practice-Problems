// Count total set bits
// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

// Example 1:

// Input: N = 4
// Output: 5
// Explanation:
// For numbers from 1 to 4.
// For 1: 0 0 1 = 1 set bits
// For 2: 0 1 0 = 1 set bits
// For 3: 0 1 1 = 2 set bits
// For 4: 1 0 0 = 1 set bits
// Therefore, the total set bits is 5.
// Example 2:

// Input: N = 17
// Output: 35
// Explanation: From numbers 1 to 17(both inclusive),
// the total number of set bits is 35.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int largestpower(int n)
    {
        int x = 0;

        while ((1 << x) <= n)
        {
            x++;
        }

        return x - 1; //imp return x-1;
    }

    int countSetBits(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        int xs = largestpower(n);
        //numbers less than x
        int nltx = xs * (1 << (xs - 1));
        int msbbits = n - (1 << xs) + 1;
        int restbits = n - (1 << xs);
        int answer = nltx + msbbits + countSetBits(restbits);
        return answer;
    }
};

int main()
{
    int n;
    cin >> n; //input n
    Solution ob;
    cout << ob.countSetBits(n) << endl;
    return 0;
}
