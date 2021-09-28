



#include <bits/stdc++.h>

using namespace std;

int z(int n)
{
    if (n < 10)
    {
        return 1;
    }

    if (n % 10 == n / 10 % 10)
    {
        return 0;
    }

    int ld = n % 10 < n / 10 % 10;
    n = n / 10;

    while (n / 10)
    {
        if (ld && (n % 10 > n / 10 % 10) || !ld && (n % 10 < n / 10 % 10))
        {
            ld = !ld;
            n /= 10;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n = 15;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        count += z(i);
    }

    cout << count << endl;
}