#include <iostream>
using namespace std;

class A; //forward declaration

class B
{
private:
int n2;
public:
void getdata(){
    cout << "Enter the second number" << endl;
    cin >> n2;
}

void printB(){
    cout << "value of class B " << n2 <<endl;
}
    friend void exchange(A &, B &);
};

class A
{
private:
int n1;
public:
void get(){
    cout << "Enter the first number" << endl;
    cin >> n1;
}

void printA(){
    cout << "value of class A " << n1 <<endl;
}
    friend void exchange(A &, B &);
};

void exchange(A&x,B&y){
    int temp = x.B;
    x.A = y.B;
    y.B = temp;
}

int main()
{

    A abc;
    B pqr;
    abc.get();
    pqr.getdata();
    cout << "The numbers after swap:" <<endl;
    abc.printA();
    pqr.printB();
    cout << "The number before swap" <<endl;
    exchange(abc,pqr);
    abc.printA();
    pqr.printB();


    return 0;
}