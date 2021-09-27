// Finding middle element in a linked list
// Easy Accuracy: 47.37% Submissions: 100k+ Points: 2
// Given a singly linked list of N nodes.
// The task is to find the middle of the linked list. For example, if the linked list is
// 1-> 2->3->4->5, then the middle node of the list is 3.
// If there are two middle nodes(in case, when N is even), print the second middle element.
// For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5
// Output: 3
// Explanation:
// Middle of linked list is 3.
// Example 2:

// Input:
// LinkedList: 2->4->6->7->5->1
// Output: 7
// Explanation:
// Middle of linked list is 7.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int count = 0;
        Node *search = head;

        while (search != NULL)
        {
            count++;
            search = search->next;
        }

        int mid = count / 2;

        for (int i = 0; i < mid; i++)
        {
            head = head->next;
        }

        return head->data;
    }
};

int main()
{
    int N;
    cin >> N;
    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < N - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }

    Solution ob;
    cout << ob.getMiddle(head) << endl;

    return 0;
}

// ip
// 7
// 2 4 6 7 5 1
