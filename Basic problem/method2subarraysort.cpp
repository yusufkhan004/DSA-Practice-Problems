#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool outOfOrder(vector<int> arr, int i){
    int x = arr[i];
    // Two corner case should also taken into account 
    //when the element is outoforder? when x > arr[i+1] and when x < arr[i-1]
        
    if(i==0){
        return x > arr[i+1];
    }
    if(i==arr.size()){
        return x < arr[i-1];
    }

    // otherwise 
    return x > arr[i+1] || x < arr[i-1];
    
}

pair<int, int> subarraySort(vector<int> arr){

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i <arr.size();i++){
        int x = arr[i];
        if(outOfOrder(arr,i)){
            largest = max(x,largest);
            smallest = min(x,smallest);
        }
    }

//To find the rigth index to place where the smallest 
//and largest number is going to lie

    if(smallest == INT_MAX){
        return {-1,-1};
    }

    // otherwise if 1 element is outoforder then ultimately there are 2 element which are outoforder

    int left = 0;
    while(smallest >= arr[left]){
        left++;
    }
    int right = arr.size();
    while(largest <= arr[right]){
        right--;
    }

    return {left,right};
}

int main() {

    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};

    auto p =  subarraySort(arr);

    cout << p.first << " and " << p.second << endl; 


    return 0;
}

// time complexity of this program is O(n) + O(n) = 2*O(n) i.e O(n)