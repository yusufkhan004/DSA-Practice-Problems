// Write a finction that takes input an array of distinct
// integers and returns the length of highest mountain

#include <iostream>
#include<vector>
using namespace std;

int mountainLength(vector<int> array){
    int n = array.size();
    int highest = 0;

    for(int i=1; i<n-2;){

        // check whether a[i] is peak or not
        if(array[i-1] < array[i] && array[i+1] < array[i]){

            // do some work
            int count  = 1;
            int j = i;

            // count backwards (left)
            while(j>=1 && array[j]>array[j-1]){
                j--;
                count+=1;
            }
            
            // count forwards (right)
            while(i<=n-2 && array[i] > array[i+1]){
                i++;
                count+=1;
            }
            // store the max value betw highest and count
            highest = max(highest,count);

        }else{
            i++;
        }
    }    
    return highest;
}


int main() {

    vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    auto x = mountainLength(arr);
    cout << "The Length of the highest mountain is " << x;

    return 0;
}