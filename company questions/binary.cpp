#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bin;
    while (n != 0){
        int rem = n % 2;
        bin.push_back(rem);
        n = n / 2;
    }
    reverse(bin.begin(), bin.end());
    for (int i : bin){
        cout << i << "";
    }
    return 0;
}