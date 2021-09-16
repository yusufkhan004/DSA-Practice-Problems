// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

void kthsmallestnumber(int arr[]){

    unordered_set<int> a;

    // int n = sizeof(arr)/sizeof(arr[0])

    for(int x : arr){
        a.insert(x);
    }
    
    for(int x:a){
        cout << x <<" ";
    }

}

int main(){

    int arr[] = {7,10,4,3,20,15};

    kthsmallestnumber(arr);

    return 0;
}