#include <bits/stdc++.h>
using namespace std;



string lexicographic(sting word){
    
}
int main()
{

    int n, ab, ba;
    cin >> n >> ab >> ba;
    int absize = 0;
    int basize = 0;

    string word;
    cin >> word;
    for (int i = 0; i < n - 1; i++)
    {
        int x = word[i];
        int j = i + 1;
        if (x == 'a')
        {
            while (j < n)
            {
                if (word[j] == 'b')
                {
                    absize++;
                }
                j++;
            }
        }
        else if (x == 'b')
        {
            while (j < n)
            {
                if (word[j] == 'a')
                {
                    basize++;
                }
                j++;
            }
        }
    }
    if (absize == ab && basize == ba)
    {
        cout << "Possible" << endl;
        cout << lexicographic(word);
    }
    else
    {
        cout << "Impossible" << endl;
    }
    return 0;
}