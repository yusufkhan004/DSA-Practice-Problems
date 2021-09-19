//find function

#include <iostream>
using namespace std;

int main()
{
    // a paragraph
    string paragraph = "We are learning about STL strings. STL string class is quite power";

    string word;
    getline(cin, word);

    // find function
    size_t index = paragraph.find(word);

    if (index == -1)
    {
        cout << "string not found";
    }

    if (index != -1)
    {
        cout << "First occ." << index << endl;
    }

    index = paragraph.find(word, index + 1);

    if (index != -1)
    {
        cout << "second occ." << index << endl;
    }
    return 0;
}