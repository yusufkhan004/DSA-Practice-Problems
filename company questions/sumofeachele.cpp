#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {1,4,2,6,3};
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        cout << sum << " ";
    }
    return 0;
}