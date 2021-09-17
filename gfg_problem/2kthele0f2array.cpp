// K-th element of two sorted Arrays 
// Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.

// Input:
// arr1[] = {2, 3, 6, 7, 9}
// arr2[] = {1, 4, 8, 10}
// k = 5
// Output:
// 6
// Explanation:
// The final sorted array would be -
// 1, 2, 3, 4, 6, 7, 8, 9, 10
// The 5th element of this array is 6.

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> array;
        
        for(int i=0;i<n;i++){
            array.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            array.push_back(arr2[i]);
        }
        
        sort(array.begin(),array.end());
        
        
        // for(auto x : array){
        //     cout << x << " ";
        // }
        
        return array[k-1];
    }
};

int main()
{
	

    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    
    Solution ob;
    cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	
    return 0;
} 

// 5
// 4
// 5
// 2 3 6 7 9
// 1 4 8 10

