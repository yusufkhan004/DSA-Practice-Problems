#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> arr;
    int lsb,msb;
    int no1 = 0;
    while(n>0){
        int rem = n%2;
        arr.push_back(rem);
        n = n/2;
    }
    for(int i: arr){
        if(i == 1){
            no1++;
        }
    }
    for(int i = arr.size()-1;i>=0;i--){
        if(arr[i] == 1){
            msb = i;
            break;
        }else{
            msb = 0;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 1){
            lsb = i;
            break;
        }else{
            lsb = 0;
        }
    }
    string result = to_string(no1) + "#" + to_string(lsb) + "#" + to_string(msb);
    cout << result << endl;
    return 0;
}