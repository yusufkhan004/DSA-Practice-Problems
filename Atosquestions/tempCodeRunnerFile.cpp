#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag = 0;
    vector<int> arr = {3, 7, 2,5 ,4,6};
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int s = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i] != s){
            flag = 1;
            break;
        }
        s++;
    }
    if(flag == 1){
        cout << "0";
    }else{
        cout << "1";
    }
    return 0;
}