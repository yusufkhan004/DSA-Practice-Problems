#include <bits/stdc++.h>

using namespace std;

bool isElementPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> values = {2, 9, 5, 3, 14, 80, 17};
    vector<int> first, second;
    for (int i = 0; i < values.size(); i++)
    {
        if (isElementPrime(values[i]))
        {
            // first.push_back(values[i]);
            cout << "prime";
        }
        else
        {
            // second.push_back(values[i]);
            cout << "No prime";
        }
    }

    // for (int i : second)
    // {
    //     first.push_back(i);
    // }

    // for (int i : first)
    // {
    //     cout << i << " ";
    // }

    // for (int i : second)
    // {
    //     cout << i << " ";
    // }
    return 0;
}