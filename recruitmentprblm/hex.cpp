#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ele;
    vector<char> ans;
    while (n != 0)
    {
        int rem = n % 16;

        if (rem < 10)
        {
            ans.push_back(rem + 48);
        }
        else if (rem > 9)
        {
            ans.push_back(rem + 55);
        }
        n = n / 16;
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}