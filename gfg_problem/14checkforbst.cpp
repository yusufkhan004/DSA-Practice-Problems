// Check for BST 
// Easy Accuracy: 21.58% Submissions: 100k+ Points: 2
// Given the root of a binary tree. Check whether it is a BST or not.
// Note: We are considering that BSTs can not contain duplicate Nodes.
// A BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 

// Example 1:

// Input:
//    2
//  /    \
// 1      3
// Output: 1 
// Explanation: 
// The left subtree of root node contains node 
// with key lesser than the root node’s key and 
// the right subtree of root node contains node 
// with key greater than the root node’s key.
// Hence, the tree is a BST.
// Example 2:

// Input:
//   2
//    \
//     7
//      \
//       6
//        \
//         5
//          \
//           9
//            \
//             2
//              \
//               6
// Output: 0 
// Explanation: 
// Since the node with value 7 has right subtree 
// nodes with keys less than 7, this is not a BST.




#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// } Driver Code Ends
class Solution
{
public:
    //Function to check whether a Binary Tree is BST or not.
    vector<int> array;
    void check(Node *root)
    {
        if (root == NULL)
            return;

        check(root->left);
        array.push_back(root->data);
        check(root->right);
    }

    bool isBST(Node *root)
    {
        check(root);
        for (int i = 1; i < array.size(); i++)
        {
            if (array[i] <= array[i - 1])
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

void inorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main()
{
    string s;
    getline(cin, s);
    Node *root = buildTree(s);
    Solution ob;
    if (ob.isBST(root))
        cout << "1\n";

    else
        cout << "0\n";

    return 0;
}