#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
    int n;
    int count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i>0 && gcd(i,n)==1){
            count++;
        }
    }
    cout << count << endl;
}