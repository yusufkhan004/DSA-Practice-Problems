#include <bits/stdc++.h>
#include <map>
using namespace std;

// int fct(int n, map<int, int> memo)
// {
//     int f;
//     if (memo.find(n) != memo.end())
//     {
//         return memo[n];
//     }
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (f <= n)
//     {
//         memo[f] = f * fct(f + 1, memo);
//     }
//     // memo[n] = n * fct(n - 1, memo);

//     return memo[n];
// }

// int fact(int n)
// {
//     map<int, int> s;
//     int f = fct(n, s);

//     return f;
// }

int main()
{
    int n;
    cin >> n;
    long long fact = 1;
    int i = n;

    while (i > 0)
    {
        fact = fact * i;
        i = i - 1;
    }

    cout << fact;
    // vector<int> res;

    // while (fact > 0)
    // {
    //     res.push_back(fact % 10);
    //     fact /= 10;
    // }

    // for (auto i : res)
    // {
    //     cout << i << " ";
    // }
    // cout << fact;
    // n = fact(n);
    // cout << n;
    return 0;
}