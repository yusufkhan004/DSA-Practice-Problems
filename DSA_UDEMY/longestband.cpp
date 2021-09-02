#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int largestBand(vector<int> arr)
{

    unordered_set<int> s;
    int largestlength = 1;

    // Data inside a set
    for (int x : arr)
    {
        s.insert(x);
    }

    // iterate over the array
    for (int element : s)
    {
        int parent = element - 1;
        int count = 0;

        // if parent is not found in the arr
        if (s.find(parent) == s.end())
        {
            // find entire band / chain starting from element

            int next_element = element + 1;

            while (s.find(next_element) != s.end())
            {
                next_element++;
                count++;
            }

            if (count > largestlength)
            {
                largestlength = count;
            }
        }
        // else if parent is found in array loop will continue
    }

    return largestlength;
}

int main()
{

    vector<int> array = {1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};

    cout << largestBand(array);
    return 0;
}