#include <iostream>
#include <vector>
using namespace std;

pair<int, int> minmax(vector<int> arr)
{
    int maxima = INT_MIN;
    int minima = INT_MAX;

    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i < n && j >= 0)
    {
        maxima = max(maxima, arr[i]);
        minima = min(minima, arr[j]);
        i++;
        j--;
    }

    return {maxima, minima};
}

int main()
{

    vector<int> arr = {4, 2, 7, 9, 6, 0, 5, 1, 12};

    auto p = minmax(arr);
    cout << "[Max,Min] -> [" << p.first << "," << p.second << "]" << endl;
    return 0;
}