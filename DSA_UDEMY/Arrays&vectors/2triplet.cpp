#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> array, int sum)
{

    vector<vector<int>> s;
    sort(array.begin(), array.end());

    int n = array.size();

    // for(int i = 0; i < n;i++){
    //     for(int j = i+1; j < n;j++){
    //         for(int k = j+1; k < n; k++){
    //             if(sum == array[i]+array[j]+array[k]){
    //                 s.push_back({array[i],array[j],array[k]});
    //             }

    //         }
    //     }
    // }

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;

        //two pointer approach
        while (j < k)
        {
            int currentsum = array[i];
            currentsum += array[j];
            currentsum += array[k];

            if (currentsum == sum)
            {
                s.push_back({array[i], array[j], array[k]});
                j++;
                k--;
            }
            else if (currentsum > sum)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return s;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    auto value = triplet(arr, target);

    cout << "[" << endl;
    for (auto x : value)
    {
        cout << "[";
        for (auto j : x)
        {
            cout << j << ",";
        }
        cout << "]";
        cout << endl;
    }
    cout << "]";

    return 0;
}