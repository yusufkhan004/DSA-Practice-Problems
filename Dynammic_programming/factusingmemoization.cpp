#include <bits/stdc++.h>
#include <map>
using namespace std;

int fct(int n, map<int, int> memo)
{
    int f;
    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    if (n == 0)
    {
        return 1;
    }

    memo[n] = n * fct(n - 1, memo);

    return memo[n];
}

int fact(int n)
{
    map<int, int> s;
    int f = fct(n, s);

    return f;
}

int main()
{
    int n;
    cin >> n;
    n = fact(n);
    cout << n;
    return 0;
}