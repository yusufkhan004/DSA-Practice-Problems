// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given
// array is 7.

#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;

class Kthele
{
public:
    void kthsmallestnumber(int arr[], int n, int k)
    {
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            a.push_back(arr[i]);
        }
        sort(a.begin(), a.end());
        cout << a[k + 1];

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i];
        // }
    }
};

int main()
{

    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the Kth element" << endl;
    cin >> k;

    Kthele obj;

    obj.kthsmallestnumber(arr, n, k);

    return 0;
}