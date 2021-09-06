#include <iostream>
using namespace std;

class Geeks
{

public:
    string name;
    int roll;
    void print();
};

void Geeks::print()
{
    cout << "Your name is :" << name << endl;
    cout << "Your roll is :" << roll << endl;
}

int main()
{
    Geeks obj1;

    cout << "Enter the name: " << endl;
    cin >> obj1.name;
    cout << "Enter the roll number: " << endl;
    cin >> obj1.roll;

    obj1.print();
    return 0;
}