#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    int i = 0;
    while (i < str.size())
    {
        if (!isalnum(str[i]))
        {
            count++;
            cout << str[i];
        }
        i++;
    }
    cout << endl;
    cout << count;
    return 0;
}