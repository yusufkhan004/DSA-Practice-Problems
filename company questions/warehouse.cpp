#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, noc, cellid;
    cin >> n >> noc;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == noc)
        {
            cellid = i;
            break;
        }
    }

    cout << "cellid: " << cellid << endl;

    return 0;
}