// INPUT FORMAT:

// Input consists of two strings.

// Assume that the maximum length of the string is 50 and it contains only alphabets.

// OUTPUT FORMAT:

// Refer sample input and output for formatting specifications.

// SAMPLE INPUT & OUTPUT:

// Excellent

// Excellent

// It is correct

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[10], s2[10];
    cin >> s1 >> s2;
    int res = strcmp(s1, s2);
    if (res == 0)
        cout << "It is correct";
    else
        cout << "It is wrong";
    //Type your code here.
}