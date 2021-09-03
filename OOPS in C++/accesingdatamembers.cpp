#include <iostream>
using namespace std;

class Geeks
{
    //Acces specifier
public:
    string name;

    void printname()
    {
        cout << "Your name is : " << name << endl;
    }
};

int main()
{

    Geeks obj1;

    cin >> obj1.name;
    obj1.printname();
}
