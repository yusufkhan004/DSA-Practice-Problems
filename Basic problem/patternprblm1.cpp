#include <iostream>

using namespace std;

int main() {

    int i,j,n;
    cout << "Enter the size of the pattern:" << endl;
    cin >> n;

    for (int i = 1; i <=n;i++){
        for (int j = 1; j<=i; j++){
            cout << i << " ";
        }
    cout << endl;
    }
}