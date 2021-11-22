#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,x;
    getline(cin,s);
    cin >> x;
    string arr = "";

    for(int i = 0; i<s.length();i++){
        if(s[i] != x[0]){
            arr += s[i];
        }
    }
    cout << arr;
    return 0;
}