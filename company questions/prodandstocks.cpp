#include <bits/stdc++.h>
using namespace std;

int frequency(vector<int> a, int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    return count;
}
int main()
{

    int n;
    cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[i] = x;
    }

    for (int i = 0; i < n; i++)
    {
        arr[a[i]] = frequency(a, n, a[i]);
    }

    for (auto i : arr)
    {
        cout << i.first << " " << i.second << endl;
    }
    int mx = INT_MIN, mn = INT_MAX;
    for (auto i : arr)
    {
        mx = max(mx, i.second);
        mn = min(mn, i.second);
    }

    cout << mx << "-" << mn << endl;
    

    return 0;
}