#include <iostream>
using namespace std;

int main()
{

    int key;
    string word;
    key = 3;
    word = "as3gAsd";

    // string s1 = "Abcd";
    // cout << s1.size() << endl;

    for (int i = 0; i < word.size(); i++)
    {
        int ascii = word[i];
        if (ascii > 127)
        {
            ascii = ascii % 127;
        }
        word[i] = ascii + key;
    }

    cout << word;
    return 0;
}

// 3
// as3gAsd