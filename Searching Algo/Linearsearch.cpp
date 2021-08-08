#include <iostream>
#include <vector>
using namespace std;

int linearsearch(vector<int> arr, int n, int x){
    int i;

    for(i=0;i<n;i++){
        if(arr[i] == x)
            return i;
    }

    return 0;
}

int main(){
    vector<int> array{8,4,6,9,1,0,7};
    int x,n;
    x = 9;
    n = sizeof(array)/sizeof(array[0]);

    int result = linearsearch(array,n,x);
    (result == 0)
    ? cout << "The number "<< n << " is not present in the array"
    : cout << "The number "<< n << " is present at index " << result << " in the array";
}