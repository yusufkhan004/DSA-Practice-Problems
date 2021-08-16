#include <iostream>

using namespace std;

int GCD(int a, int b){

    if(b==0){
        return a;
    }else if(a < b){
        return GCD(b,a);
    }else{
        return GCD(b,a%b);
    }
}

int main() {
    int p,q;
    cout << "Enter the 2 number" <<endl;
    cin >> p >> q;

    int g = GCD(p,q);

    cout << g << endl;

}