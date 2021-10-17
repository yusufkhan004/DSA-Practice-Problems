#include <bits/stdc++.h>

using namespace std;
int main()
{
    char para[10000];
    getline(cin, para, 10000);
    // cin.getline(para, sizeof(para));
    // para = "hello world, how are you?";
    int space = 0;
    for (int i = 0; para[i] != '\0'; i++)
    {
        if (para[i] == ' ')
        {
            space++;
        }
    }

    int idx = strlen(para) + 2 * space;
    para[idx] = '\0';

    for (int i = strlen(para) - 1; i >= 0; i--)
    {
        if (para[i] == ' ')
        {
            para[idx - 1] = '0';
            para[idx - 2] = '2';
            para[idx - 3] = '%';
            idx -= 3;
        }
        else
        {
            para[idx - 1] = para[i];
            idx--;
        }
    }

    cout << para << endl;
    return 0;
}