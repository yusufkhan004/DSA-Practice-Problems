#include<bits/stdc++.h>

using namespace std;

bool pal(string n){
    string rev = n; 
    reverse(rev.begin(), rev.end());
    if(n.compare(rev)){
        return true;
    }else{
        return false;
    }
}
int main(){

    int n;
    string arr[n],s,s1,s2;
    cin>> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        s = arr[i];
        int len = arr[i].size();
        if(len % 2 == 0){
            if(pal(s) && len >=2){
                int mid = len/2;
                for(int j=0; j<mid; j++){
                    s1 = s[j];
                }
                for(int j=mid; j<=len; j++){
                    s2 = s[j];
                }
        }else{

        }
        }
    }

    cout << s << " " <<s1 << " " <<s2 << " " <<endl;
    return 0;
}