#include <iostream>
using namespace std;

class Gcd
{
public:
    int num1, num2;
    void find()
    {
        cout << "Enter the 2 numbers : " << endl;
        cin >> num1 >> num2;

        while (num1 != num2)
        {
            if (num1 > num2)
            {
                num1 = num1 - num2;
            }

            if (num1 < num2)
            {
                num2 = num2 - num1;
            }
        }

        cout << "The GCD of two numbers is : " << num1 << endl;
    }

    // void print(int num1);
};

// void Gcd ::print(int a)
// {
//     cout << "The GCD of two numbers is : " << a << endl;
// }

int main()
{

    Gcd obj;
    obj.find();
    return 0;
}