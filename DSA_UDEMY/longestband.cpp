#include<iostream>
#include <unordered_set>
#include<vector>
#include<algorithm>

using namespace std;

int largestBand(vector <int> arr){

    int largestlength = 1;
    unordered_set<int> s;

    //first create a lookup means duplicate array for searching operation 
    for(auto x: arr){
        s.insert(x);
    }


    for(auto element: s){
        int parent = element - 1;

        if(s.find(parent)==s.end()){
            //find entire band /chain starting from element
            int nextElement = element + 1;
            int count = 1;

            while(s.find(nextElement)!=s.end()){
                nextElement++;
                count++;
            }

            if(count > largestlength){
                largestlength = count;
            }
        }
    }
    return largestlength;
}



int main(){

    vector<int> array = {1,9,3,0,18,5,2,4,10,7,12,6};

    cout << largestBand(array);
    return 0;
}