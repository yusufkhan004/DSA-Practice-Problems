#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f, s, t;
    vector<int> v, v1, v2;
    cin >> f >> s >> t;

    while (f != 0)
    {
        int n = f % 10;
        v.push_back(n);
        f = f / 10;
    }
    sort(v.begin(), v.end());
    int l1 = v.size();

    while (s != 0)
    {
        int n1 = s % 10;
        v1.push_back(n1);
        s = s / 10;
    }
    sort(v1.begin(), v1.end());
    int l2 = v1.size();

    while (t != 0)
    {
        int n2 = t % 10;
        v2.push_back(n2);
        t = t / 10;
    }
    sort(v2.begin(), v2.end());
    int l3 = v2.size();

    int d = v[l1] + v1[l2] + v2[l3];
    int d1 = v[l1 - 1] + v1[l2 - 1] + v2[l3 - 1];

    int ans = d - d1;
    
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // for (int i : v1)
    // {
    //     cout << i << " ";
    // }
    // for (int i : v2)
    // {
    //     cout << i << " ";
    // }
    cout << ans;
    return 0;
}