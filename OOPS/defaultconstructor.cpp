#include <iostream>
using namespace std;

class Geek
{

public:
    int id;

    //default constructor
    Geek()
    {
        cout << "Default constructor is called " << endl;
        id = -1;
    }

    //Parameterized constructor
    Geek(int id)
    {
        cout << "Parameterized constructor is called" << endl;
    }
};

int main()
{
    //obj1 will call default constructor
    Geek obj1;
    cout << "ID: : " << obj1.id << endl;

    //obj2 will call parametrized constructor
    Geek obj2(21);
    cout << "ID : " << obj2.id << endl;

    return 0;
}