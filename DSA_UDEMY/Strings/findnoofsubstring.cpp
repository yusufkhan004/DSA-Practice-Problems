#include <bits/stdc++.h>

using namespace std;

int main()
{
    string bigstring = "I liked the movie, acting in movie was great.";
    string smallstring = "zayn";
    vector<int> arr;

    auto index = bigstring.find(smallstring);
    // while (index != -1)
    // {
    //     arr.push_back(index);
    //     index = bigstring.find(smallstring, index + 1);
    // }
    if (index == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "found";
    }

    // for (int i : arr)
    // {
    //     cout << i << ",";
    // }

    return 0;
}