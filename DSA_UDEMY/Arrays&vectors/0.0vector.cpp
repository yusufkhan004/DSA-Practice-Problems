#include <iostream>
#include <vector>
using namespace std;

int main(){
    // initialization using fill constructors
    vector<int> array = {1,2,3,4,5},visited(4,7);

    cout << array.size() << endl;
    cout << "array capacty before pushing elements is " << array.capacity() << endl;
    
    // pushback O(1)
    array.push_back(6); //capacity of array doubled

    for(int i=0;i< array.size();i++){
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "array capacty after pushing elements is " << array.capacity() << endl;
    // pop last element
    array.pop_back(); 

    // for(int i=0;i< array.size();i++){
    //     cout << array[i] << " ";
    // }

    //using for each loop
    //for each int in vector we need to print it 

    for(int x: array){
        cout << x << ",";
    }

    cout << endl;
    //fill constructors [arrayname(repeatition,value)]
    // vector<int> visited(4,7);
    for(int i=0;i< visited.size();i++){
        cout << visited[i] << " ";
    }

}