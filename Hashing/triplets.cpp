#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector <vector<int>> triplet(vector<int> arr, int targetSum){

    vector< vector<int> > tripletPairs;

    sort(arr.begin(),arr.end());

    int n = arr.size();
    for(int i =0;i<n-2;i++){
        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = arr[i];
            sum += arr[j];
            sum += arr[k];

            if (sum == targetSum){
                tripletPairs.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }else if(sum > targetSum){
                k--;
            }else{
                j++;
            }

        }
    }
    return tripletPairs;
}



int main() {
    vector<int> array = {1,2,3,4,5,6,7,8,9,15};
    int target = 18;

    auto values = triplet(array,target); 
    
    for(auto x: values){
        for(auto y: x){
            cout << y <<",";
        }
        cout << endl;
    }
    return 0;
}