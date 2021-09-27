#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int f = 0;
    int fact = 1;
    for (int j = 1; j <= n; j++)
    {
        fact = fact * j;
    }
    cout << fact;
    return 0;
}