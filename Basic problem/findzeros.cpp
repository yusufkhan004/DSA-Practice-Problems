#include <iostream>
#include <unordered_set>
#include<vector>

using namespace std;

bool subarrayzero(vector<int> arr){

    unordered_set<int> sumset;

    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+= arr[i];
        if(sum == 0 || sumset.find(sum) == sumset.end()){
            return true;
        }
    sumset.insert(sum);
    }
    return false;
}

int main() {

    vector<int> arr = {1, 4, -2, -2, 5, -4, 3};
    if(subarrayzero(arr)){
        cout << "0";
    }else{
        cout << "1";
    }

    return 0;
}