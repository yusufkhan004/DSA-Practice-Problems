#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> subarraysort( vector<int> array){

    vector<int> duparray(array);
    sort(array.begin(),array.end());
    int i = 0;
    int n = array.size();

    while(i<n && array[i] == duparray[i]){
        i++;
    }
    int j = array.size()-1;

    while(j>=0 && array[j] == duparray[j]){
        j--;
    }

    if(i == array.size()){
        return {-1,-1};
    }

    return {i,j};
    // for (int x : duparr){
    //     cout << x << endl;
    // }
}

int main(){

    vector<int> arr = {1,2,3,4,5,7,8,6,9,10,11};
    vector<int> index;
    index = subarraysort(arr);

    // for(auto x: index){
    //     cout <<x << " " ;
    // }

    sort(arr.begin()+index[0],arr.begin()+index[1]+1);
    for(int x: arr){
        cout << x << " ";
    }
    return 0;
}