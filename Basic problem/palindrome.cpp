#include <iostream>
using namespace std;

int main() {
    int n,dn,d,temp = 0;
    cout << "Enter the number:" << endl;
    cin >> n;

    dn = n;

    while(dn!=0) {
        d = dn %10;
        temp = (temp*10) + d;
        dn = dn/10;
    }

    if(n == temp){
        cout << "Interger is Palindrome" << endl;
    }else{
        cout << "Interger is not a palidrome" << endl;
    }

}