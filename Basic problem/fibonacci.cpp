#include <iostream>
using namespace std;

int main() {
    int f,n,i;

    int f0 = 0;
    int f1 = 1;

    cout << "Enter the numbers of terms : " << endl;
    cin >> n;
    cout << "The fibonacci series of "<< n << " terms are :" << endl;
    cout << f0 << " " << f1 << " "; 
    for (i=2;i<n;i++){
        f= f0 + f1;

        cout << f << " ";
        f0 = f1;
        f1 = f;
    }

return 0;
}