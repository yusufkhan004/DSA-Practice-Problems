#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag;
    // cin >> n;
    vector<int> a = {1, 4, -2, -2, 5, -4, 3};

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     a.push_back(x);
    // }
    n = a.size();
    // sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        flag = 0;

        int sum = a[i];
        while (j <= n - 1)
        {

            sum += a[j];

            if (sum == 0 || a[i] == 0 || a[j] == 0)
            {
                flag = 1;
            }
            j++;
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
        cout << "1";
    else
        cout << "0";

    return 0;
}