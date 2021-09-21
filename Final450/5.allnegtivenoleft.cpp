#include <iostream>
using namespace std;

//using two pointer approach
void allNegativeOneSided(int arr[], int n)
{

    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        if (arr[l] < 0 && arr[r] < 0)
        {
            l++;
        }
        else if (arr[l] > 0 && arr[r] < 0)
        {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        else if (arr[l] > 0 && arr[r] > 0)
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }
}

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, x;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    allNegativeOneSided(arr, n);
    printarray(arr, n);

    return 0;
}