#include <bits/stdc++.h>
using namespace std;

vector<int> largest(int n)
{

    vector<int> arr;
    vector<int> values;
    int temp = n;
    while (temp != 0)
    {
        int d = temp % 10;
        arr.push_back(d);
        temp = temp / 10;
    }
    sort(arr.begin(), arr.end());
    values.push_back(*(arr.end() - 1));
    values.push_back(*(arr.end() - 2));

    return values;
}
int main()
{
    int f, s, t;
    vector<int> v, v1, v2;
    cin >> f >> s >> t;

    v = largest(f);
    v1 = largest(s);
    v2 = largest(t);

    int op = (v[0] + v1[0] + v2[0]) - (v[1] + v1[1] + v2[1]);
    cout << op;
    return 0;
}