// Print pairs whose sum is equal to key
// [2,1,8,6,-2,5,3,0]

#include<iostream>
#include<unordered_set>
using namespace std;

vector<int> pairsum(vector<int> array, int sum){
    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < array.size();i++){
        x = sum - array[i];
        //checking in the unordered set
        if(s.find(x) != s.end()){
            result.push_back(x);
            result.push_back(i);
            return result;
        }

        s.insert(x);
    }
return array;


}


int main(){

    int k;
    vector<int> arr = {8,9,5,3,7,4,5,0,1};
    vector<int> y;
    cin >> k;

    y = vector<int> pairsum(arr,k);

    for(vector<int> x:y){
        cout << x << " - ";
    }


    return 0;
}

