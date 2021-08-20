#include <iostream>
#include<unordered_set>
using namespace std;

int main(){
    
    //set is collectio of keys
    //each insertion is order 1
    unordered_set<int> s = {1,2,3,4,5,6,7,8,9,10,11,12};

    s.insert(18);
    s.erase(2);
    int key;
    cin >> key;

    // s.end denotes after the last element i.e address
    if(s.find(key)!= s.end()){
        cout << key << " is present" << endl;
    }else{
        cout << "Not Found" << endl;
    }

    //print all element of unordered set

    for(auto x: s){
        cout << x << " ";
    }




    return 0;
}