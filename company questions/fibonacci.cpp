#include <bits/stdc++.h>
using namespace std;

int main()
{

    int f0, f1, f, n;
    cin >> n;
    f0 = 0;
    f1 = 1;
    int sum = 1;
    // cout << f0 << " " << f1 << " ";
    for (int i = 0; i < n - 2; i++)
    {
        f = f0 + f1;
        // cout << f << " ";
        sum += f;
        f0 = f1;
        f1 = f;
    }
    cout << sum;

    return 0;
}