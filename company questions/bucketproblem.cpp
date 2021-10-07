#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, word;
    getline(cin, s, ',');

    getline(cin, word);

    string temp = s;

    for (int i = 0; i < word.length(); i++)
    {
        size_t index = temp.find(word[i]);
        if (index != -1)
        {
            cout << "NO";
            break;
        }
        temp.erase(temp.begin() + index);
    }

    return 0;
}