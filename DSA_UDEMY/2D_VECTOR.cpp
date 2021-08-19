#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector< vector<int> > array = {
        {1,2,3}, // arr[0] each row can have different no. of elements
        {4,5,6}, //arr[1]
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };


    for (int i = 0; i <array.size();i++){
        for(int number : array[i]){
            cout << number << " ";
        }
        cout << endl;
    }
}
