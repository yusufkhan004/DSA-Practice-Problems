// Repeated String Match
// Given two strings A and B, find the minimum number of times A has to be repeated such that B becomes a substring of the repeated A. If B cannot be a substring of A no matter how many times it is repeated, return -1.

// Example 1:

// Input: A = "abcd", B = "cdabcdab"
// Output: 3
// Explanation: After repeating A three times,
// we get "abcdabcdabcd".
// Example 2:

// Input: A = "aa", B = "a"
// Output: 1
// Explanation: B is already a substring of A.

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int repeatedStringMatch(string A, string B)
    {
        string temp = A;
        int repeat = 1;

        // find position of B in A and check if position is -1 or not
        // and iteratively append s into A and check whether len of A is <= B+temp
        while (A.find(B) == string::npos && A.length() <= B.length() + temp.length())
        {
            A.append(temp);
            repeat++;
        }

        // if string is found return count value
        if (A.find(B) != string::npos)
        {
            return repeat;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    string A, B;
    cin >> A;
    cin >> B;
    Solution obj;
    cout << obj.repeatedStringMatch(A, B) << "\n";
    return 0;
}

// abcd
// cdabcdab