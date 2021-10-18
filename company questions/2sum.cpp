#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
                count++;
            }
        }
    }
    cout << "count = " << count << endl;

    return 0;
}