#include <bits/stdc++.h>
using namespace std;

int main()
{
    string teacher, student;
    int teachprod = 1, studprod = 1;

    cin >> teacher >> student;

    for (int i = 0; i < teacher.size(); i++)
    {
        int num = (teacher[i] - 64);
        cout << num << " ";
        teachprod = teachprod * (teacher[i] - 64);
    }

    for (int i = 0; i < student.size(); i++)
    {
        studprod = studprod * (student[i] - 64);
    }

    if (teachprod % 47 == studprod % 47)
    {
        cout << "CHOSEN";
    }
    else
    {
        cout << "NOT CHOSEN";
    }
    return 0;
}