#include <iostream>
using namespace std;

int main()
{

    string a = "abcd";

    string b = "cdabcdab";
    size_t str = a.find(b);
    size_t str1 = string::npos;

    cout << str << endl;
    cout << str1 << endl;

    if (str == string::npos)
    {
        cout << "yes";
    };

    if (a.find(b))
        return 0;
}