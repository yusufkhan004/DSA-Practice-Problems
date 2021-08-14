#include <iostream>

using namespace std;

int main() {

    int n,dn,d,temp = 0;
    cout << "Enter the number n" << endl;
    cin >> n;

    dn = n;

    while(dn !=0 ){
        d = dn % 10;
        temp = temp + (d*d*d);
        dn = dn/10;
    }

    if(n == temp)
    cout << "The Number " << n << " is an Armstrong number" << endl;
    else
    cout << "The Number " << n << " is not an Armstrong number" << endl;




}