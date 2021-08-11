#include <iostream>

using namespace std;

int main() {

    int fact = 1,i,n;

    cout << "Enter the number of factorial.:" << endl;
    cin >> n;

    if(n == 0)
        fact=1;
    else{
        for (int i = 1; i <= n; i++){
            fact = fact * i;
    }
    }

    cout << "The factorial of "<< n << " number is:" << endl;
    cout << fact << endl; 
}