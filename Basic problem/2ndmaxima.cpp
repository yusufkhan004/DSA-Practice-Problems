#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr = {10213,312,10};
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }else if(arr[i] > second_max){
            second_max = arr[i];
        }
    }
    cout << (second_max) << endl;

    return 0;
}