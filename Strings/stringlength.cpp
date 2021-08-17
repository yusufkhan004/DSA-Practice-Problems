// INPUT FORMAT:

// Input consists of a string.

// OUTPUT FORMAT:

// Output consists of an integer saying the length of the given word.

// Refer sample Input and Output for further specifications.

// SAMPLE INPUT & OUTPUT:

// Alice

// The length of word Alice is 5

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int y = s.length();
    cout << "The length of word " << s << " is " << y;
}
