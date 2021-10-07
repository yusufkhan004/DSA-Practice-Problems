#include <bits/stdc++.h>

using namespace std;

int main()
{
    int index = 0;
    string bigstring = "I liked the movie, acting in movie was great.";
    string smallstring = "movie";
    vector<int> arr;

    while (index < bigstring.length())
    {
        index = bigstring.find(smallstring);
        arr.push_back(index);
        index = bigstring.find(smallstring, index + 1);
    }

    for (int i : arr)
    {
        cout << arr[i] << ",";
    }

    return 0;
}