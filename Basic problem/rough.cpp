#include <bits/stdc++.h>
using namespace std;

int main()
{

    // string s = "aaaabbbbbcccccabc";
    // vector<char> temp;
    // vector<int> maxi;
    // int n = s.size();
    // if (n == 0)
    // {
    //     cout << "0" << endl;
    // }
    // int i = 0;
    // while (i < n)
    // {
    //     if (find(temp.begin(), temp.end(), s[i]) != temp.end())
    //     {
    //         // temp.push_back(s[i]);
    //         int length = temp.size();
    //         maxi.push_back(length);
    //         temp.clear();
    //     }
    //     else
    //     {
    //         temp.push_back(s[i]);
    //     }
    //     i++;
    // }

    // int len = temp.size();
    // if (len > 0)
    // {
    //     maxi.push_back(len);
    // }

    // int number = *max_element(maxi.begin(), maxi.end());
    // cout << number << endl;
    // for (auto i : maxi)
    // {
    //     cout << i << " ";
    // }

    // /**************************************/

    // bitwise shift right by 1
    // int num, n, value;
    // value = 1;
    // n = 45;
    // num = num >> 1;
    // cout << num;
    // num = num + value;
    // cout << num;

    // /**************************************/
    int n;
    cin >> n;
    int max = n % 10;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem > max)
        {
            max = rem;
        }
        n = n / 10;
    }
    cout << max << endl;

    return 0;
}