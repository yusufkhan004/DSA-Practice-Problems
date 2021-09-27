#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int arm = 0;

    while (temp != 0)
    {
        int rem = temp % 10;
        arm = arm + (rem * rem * rem);
        temp = temp / 10;
    }

    if (arm == n)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "Not an armstrong" << endl;
    }

    return 0;
}