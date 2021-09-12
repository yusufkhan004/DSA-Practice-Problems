#include <iostream>
using namespace std;

class A; //forward declaration

class B
{
private:
    int n2;

public:
    void getdata(void)
    {
        cout << "Enter the second number" << endl;
        cin >> n2;
    }

    void printB(void)
    {
        cout << "value of class B " << n2 << endl;
    }
    friend void exchange(B, A);
};

class A
{
private:
    int n1;

public:
    void get(void)
    {
        cout << "Enter the first number" << endl;
        cin >> n1;
    }

 
    void printA(void)
    {
        cout << "value of class A " << n1 << endl;
    }
    friend void exchange(B, A);
};

void exchange(B pqr, A abc)
{
    int temp = abc.n1;
    abc.n1 = pqr.n2;
    pqr.n2 = temp;
}

int main()
{

    A abc;
    B pqr;
    abc.get();
    pqr.getdata();
    cout << "The numbers after swap:" << endl;
    abc.printA();
    pqr.printB();
    exchange(pqr, abc);
    cout << "The number before swap" << endl;
    abc.printA();
    pqr.printB();

    return 0;
}