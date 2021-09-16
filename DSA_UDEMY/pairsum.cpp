#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Pair
{

public:
    vector<int> pairSum(vector<int> arr, int sum)
    {
        unordered_set<int> s;
        vector<int> result;

        // NOTE: the sequence is important in for loop i.e. 1st find if set has x (sum - arr[i]) value is present
        // or not then store the value otherwise if y'all opt to store value and then find then you
        // will also get the (2,2) pair as a o/p which is not true

        for (int i = 0; i < arr.size(); i++)
        {
            if (s.find(sum - arr[i]) != s.end())
            {
                result.push_back(arr[i]);
                result.push_back(sum - arr[i]);
                return result;
            }
            s.insert(arr[i]);
        }
    }
};

int main()
{

    int sum;
    // cin >> sum;
    sum = 4;
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};

    Pair obj;

    auto p = obj.pairSum(arr, sum);
    if (p.size() == 0)
    {
        cout << "No such pair exist";
    }
    else
    {
        cout << "[" << p[0] << ", " << p[1] << "]" << endl;
    }
    return 0;
}