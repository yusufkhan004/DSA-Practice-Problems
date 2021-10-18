#include <bits/stdc++.h>
using namespace std;
bool vowel(char n)
{
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    cin >> str;
    int index = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (vowel(str[i]))
        {
            str[i] = index + 48;
            index++;
        }
    }
    reverse(str.begin(), str.end());
    for (auto i : str)
    {
        cout << i;
    }
    return 0;
}