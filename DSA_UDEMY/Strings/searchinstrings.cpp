
#include <bits/stdc++.h>
using namespace std;

vector<int> findfunction(string paragraph, string word)
{
    vector<int> str;
    // size_t index = paragraph.find(word);
    int index = paragraph.find(word);
    while (index != -1)
    {
        str.push_back(index);
        index = paragraph.find(word, index + 1);
    }

    return str;
}
int main()
{
    // a paragraph
    string paragraph = "We are learning about STL strings. STL string class is quite power";

    string word;
    getline(cin, word);

    auto p = findfunction(paragraph, word);

    for (auto i : p)
    {
        cout << i << " ";
    }

    return 0;
}