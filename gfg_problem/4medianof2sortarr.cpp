// Median of 2 Sorted Arrays of Different Sizes 
// Given two sorted arrays array1 and array2 of size m and n respectively. Find the median of the two sorted arrays.

// Example 1:

// Input:
// m = 3, n = 4
// array1[] = {1,5,9}
// array2[] = {2,3,6,7}
// Output: 5
// Explanation: The middle element for
// {1,2,3,5,6,7,9} is 5
// Example 2:

// Input:
// m = 2, n = 4
// array1[] = {4,6}
// array2[] = {1,2,3,5}
// Output: 3.5

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        
        vector<int> array3;
        
        for(int x : array1){
            array3.push_back(x);
        }
        
        for(int x : array2){
            array3.push_back(x);
        }
        
        sort(array3.begin(),array3.end());
        
        if(array3.size() % 2 == 0){
            int mid = (array3.size()/2)-1;
            return (array3[mid]+array3[mid+1])/2.0;
        }
        else{
            int mid = ceil(array3.size()/2);
            return array3[mid];
        }
        
        
    
    }
};

int main()
{
    
    int m,n;
    m= 2;
    n = 4;
    vector<int> array1 = {4,6};
    vector<int> array2 = {1,2,3,5};
    Solution ob;
    cout<<ob.MedianOfArrays(array1, array2)<<endl;

    return 0; 
}