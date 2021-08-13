#include <iostream>

using namespace std;

int main() {
    int n,i,j;
    
    cout << "Enter the value of n:" << endl;
    cin >> n;

    for (int i = 0; i <n; i++){
        for(int j = 0; j < n-i ; j++){
            if (j % 2 == 0){
                cout << "1" << " ";
            }else{
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}