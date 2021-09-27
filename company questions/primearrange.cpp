#include <bits/stdc++.h>

using namespace std;

// int main()
// {

//     vector<int> numbers;
//     vector<int> first;
//     vector<int> second;
//     int n, x;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         numbers[i] = x;
//     }

//     for (int j = 0; j < n; j++)
//     {
//         int y = numbers[j];
//         for (int i = 2; i <= y - 1; i++)
//         {
//             if (y % i != 0)
//             {
//                 cout << "yes";
//                 first.push_back(y);
//                 break;
//             }
//             else
//             {
//                 second.push_back(y);
//                 break;
//             }
//         }
//     }

//     for (int i : first)
//     {
//         cout << i << " ";
//     }

//     for (int i : second)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

bool isElementPrime(int value)
{
    for (int i = 2; i < ((value / 2) + 1); i++)
    {
        if (value % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    vector<int> values = {2, 9, 5, 3, 14, 80, 17};
    vector<int> first, second;
    for (int i = 0; i < values.size(); i++)
    {
        if (isElementPrime(values[i]))
        {
            first.push_back(values[i]);
        }
        else
        {
            second.push_back(values[i]);
        }
    }

    for (int i : second)
    {
        first.push_back(i);
    }

    for (int i : first)
    {
        cout << i << " ";
    }

    // for (int i : second)
    // {
    //     cout << i << " ";
    // }
    return 0;
}