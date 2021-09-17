// N meetings in one room
// There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
// What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

// Example 1:

// Input:
// N = 6
// start[] = {1,3,0,5,8,5}
// end[] =  {2,4,6,7,9,9}
// Output:
// 4
// Explanation:
// Maximum four meetings can be held with
// given start and end timings.
// The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back({end[i], start[i]});
        }
        int meet = 1;
        sort(arr.begin(), arr.end());

        int fem = arr[0].first;
        for (int i = 1; i <= n - 1; i++)
        {
            if (fem < arr[i].second)
            {
                meet++;
                fem = arr[i].first;
            }
        }
        return meet;
    }
};

int main()
{

    int n;
    cin >> n;
    int start[n], end[n];
    for (int i = 0; i < n; i++)
        cin >> start[i];

    for (int i = 0; i < n; i++)
        cin >> end[i];

    Solution ob;
    int ans = ob.maxMeetings(start, end, n);
    cout << ans << endl;

    return 0;
}

// i/p
// 6
// 1 3 0 5 8 5
// 2 4 6 7 9 9
