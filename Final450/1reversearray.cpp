#include <iostream>
#include <vector>
using namespace std;

void reversearray(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

void printarray(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 3, 4, 52, 6, 3, 7, 4, 8, 4, 8, 9, 0};

    printarray(arr);
    reversearray(arr);
    cout << "Reversed array is " << endl;
    printarray(arr);

    return 0;
}