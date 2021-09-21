#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 2, 3},
                               {4, 5, 6, 7},
                               {8, 9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
    {
        for (auto it = arr[i].begin(); it != arr[i].end(); it++)
        // begin and end store address thatswhy we have printed value using pointer variable
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}