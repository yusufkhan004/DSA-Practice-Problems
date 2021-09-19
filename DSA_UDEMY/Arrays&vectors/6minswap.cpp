#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Swap
{
public:
    int minswap(vector<int> arr)
    {
        int n = arr.size();
        pair<int, int> ar[n];

        // store the values of arr with  indices using pair
        for (int i = 0; i < arr.size(); i++)
        {
            ar[i].first = arr[i];
            ar[i].second = i;
        }

        // sort the pair
        sort(ar, ar + n);
        int ans = 0;

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {

            // if element is visted or element is in right position
            if (visited[i] == true or i == ar[i].second)
            {
                continue;
            }

            // visit the element

            int node = i;
            int cycle = 0;

            while (!visited[node])
            {
                visited[node] = true;
                int next_node = ar[node].second;
                node = next_node;
                cycle += 1;
            }
            // we know that cycle-1 is the swap of that partiular cycle
            ans += cycle;
        }
        return ans;
    }
};

int main()
{
    // 2, 4, 5, 1, 3
    vector<int> arr = {1, 2, 3, 4, 5};
    Swap obj;

    int miniswap = obj.minswap(arr);

    cout << "Minimum swap required for array : " << miniswap << endl;

    return 0;
}