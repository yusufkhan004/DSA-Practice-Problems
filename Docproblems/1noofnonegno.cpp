#include <bits/stdc++.h>
using namespace std;
int countnumber(int n){
    unordered_set<int> s;
    while (n != 0){
        int d = n % 10;
        if (s.find(d) != s.end()){
            return 0;
        }
        s.insert(d);
        n = n / 10;
    }
    return 1;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    for (int i = n1; i <= n2; i++){
        count += countnumber(i);
    }
    cout << count << endl;
    return 0;
}