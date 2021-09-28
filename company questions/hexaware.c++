// Problem statement
// You have to identify and count all z numbers between a given range
// (.e. 0 to n) and print the same. A. Z number is a number that follows
// a specific pattern that states that the first digit of the number will
//  be greater than the second digit and the second one will be maller
//  than t digit and so on and vice versa Le., A[0] > A[1] <A[2] > A[3]
//  or A[0] <A[1]> A[2] <A[3] Example:

// 1. 1435
// 144, 305
// 1435 is a 2 number.

// 2. 86715
// 836, 67, 7>1, 145
// 86715 1x = 2 number.

// Note:
// • Single-digit numbers can also be considered as Z numbers.

// Input Format:

// Each test case consists of a single line of input: The line contains a
// single integer denoting n.

//The input will be read from the STDIN by the candidate.

// Output Format:
// Print the count of all the Z numbers from 0 to n. The output will be matched to the candidate's output printed on the STDOUT.

// Constraints:
// 0 ≤ n ≤ 3X106

// Example:
// Input:
// 15
// Output:
// 15

#include <bits/stdc++.h>

using namespace std;

int z(int n)
{
    if (n < 10)
    {
        return 1;
    }

    if (n % 10 == n / 10 % 10)
    {
        return 0;
    }

    int ld = n % 10 < n / 10 % 10;
    n = n / 10;

    while (n / 10)
    {
        if (ld && (n % 10 > n / 10 % 10) || !ld && (n % 10 < n / 10 % 10))
        {
            ld = !ld;
            n /= 10;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n = 15;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        count += z(i);
    }

    cout << count << endl;
}