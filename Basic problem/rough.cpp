#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "aaaabbbbbcccccabc";
    vector<char> temp;
    vector<int> maxi;
    int n = s.size();
    if (n == 0)
    {
        cout << "0" << endl;
    }
    int i = 0;
    while (i < n)
    {
        if (find(temp.begin(), temp.end(), s[i]) != temp.end())
        {
            // temp.push_back(s[i]);
            int length = temp.size();
            maxi.push_back(length);
            temp.clear();
        }
        else
        {
            temp.push_back(s[i]);
        }
        i++;
    }

    int len = temp.size();
    if (len > 0)
    {
        maxi.push_back(len);
    }

    int number = *max_element(maxi.begin(), maxi.end());
    cout << number << endl;
    for (auto i : maxi)
    {
        cout << i << " ";
    }
    return 0;
}