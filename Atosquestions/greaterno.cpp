#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string number;
    vector<int> arr;
    cin >> number;
    int num = stoi(number);
    while(num!=0){
        int rem = num%10;
        arr.push_back(rem);
        num = num/10;
    }
    reverse(arr.begin(), arr.end());
    int i,j;
    for(i = n-1;i>0;i--){
        if(arr[i] >arr[i-1]){
            break;
        }
    }
    if(i==0){
        cout << "not possible";
    }
    int x = arr[i-1];
    int smallest = i;
    for(j = i+1;j<n;j++){
        if(arr[j] > x && arr[j] < arr[smallest])
        smallest = j;
    }
    swap(arr[smallest], arr[i-1]);
    sort(arr.begin()+i, arr.end());
    string s = "";
    for (int k:arr) {
        s = s + to_string(k);
    }
    cout << s;
    return 0;
}