#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
    void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
        s.pop();
    }
    printf("\n");
}

int main()
{

    SortedStack *ss = new SortedStack();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        ss->s.push(k);
    }
    ss->sort();
    printStack(ss->s);
} // } Driver Code Ends

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack ::sort()
{
    vector<int> array;

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        array.push_back(element);
    }

    std::sort(array.begin(), array.end());

    for (auto i : array)
    {
        s.push(i);
    }
}

// ip
// 5
// 11 2 32 3 41
// op
// 41 32 11 3 2