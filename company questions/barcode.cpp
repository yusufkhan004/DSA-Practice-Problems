#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> temp;
    unordered_map<int, char> range;
    range[0] = 'a';
    range[1] = 'b';
    range[2] = 'c';
    range[3] = 'd';
    range[4] = 'e';
    range[5] = 'f';
    range[6] = 'g';
    range[7] = 'h';
    range[8] = 'i';
    range[9] = 'j';

    // 16543
    int num = 12403;
    int len = 0;
    while (num != 0)
    {
        int rem = num % 10;
        temp.push_back(rem);
        num = num / 10;
        len++;
    }
    reverse(temp.begin(), temp.end());
    for (int i = 0; i < len; i++)
    {
        cout << range[temp[i]] << "";
    }

    return 0;
}