#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trappedwater(vector<int> heights){

    //exceptional case when n(width) is less than 2 then return 0

    int n = heights.size();
    int level = 0;
    if(n<=2){
        return 0;
    }

    // for leftMax and rightMax
    vector<int> left(n,0), right(n,0);
    left[0] = heights[0];
    right[n-1] = heights[n-1];

    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],heights[i]);
        right[n-i-1] = max(right[n-i],heights[n-i-1]);
        cout << left[i] << " " << right[i] <<endl;
    }

    for(int i=0;i<n;i++){
        level +=min(left[i],right[i])-heights[i];
        // cout << level << endl;
    }

return level;
}


int main(){

    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "result" << endl;
    cout << trappedwater(water);
    return 0;
}