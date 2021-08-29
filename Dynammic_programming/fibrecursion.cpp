#include<iostream>
using namespace std;

int fib(int n){
    if(n<2) return n;
    return fib(n-1) + fib(n-2);
}

int main() {

   cout <<fib(7) <<" " << fib(14)<< " " << fib(21) << " "<<
   fib(35) << " "<< fib(49) << " " <<fib(56);

    return 0;
}