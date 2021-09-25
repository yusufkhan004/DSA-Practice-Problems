#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

// class Solution
// {
// public:
//     int search(int arr[], int x, int n)
//     {
//         for (int i = 0; i < n; i++)
//             if (arr[i] == x)
//                 return i;
//         return -1;
//     }
//     vector<int> printPostOrder(int in1[], int pre[], int n)
//     {
//         vector<int> v, v1, v2;
//         int root = search(in1, pre[0], n);
//         if (root == -1)
//             return v;
//         if (root != 0)
//             v1 = printPostOrder(in1, pre + 1, root);

//         // If right subtree is not empty,
//         // print right subtree
//         if (root != n - 1)
//             v2 = printPostOrder(in1 + root + 1, pre + 1 + root, n - root - 1);

//         v = v1;
//         for (auto x : v2)
//             v.push_back(x);
//         v.push_back(pre[0]);
//         return v;
//     }
//     bool checktree(int preorder[], int inorder[], int postorder[], int N)
//     {
//         if (N == 0)
//             return true;
//         if (N == 1)
//         {
//             if (preorder[0] == inorder[0] && preorder[0] == postorder[0])
//                 return true;
//             return false;
//         }
//         vector<int> ans = printPostOrder(inorder, preorder, N);
//         if (ans.size() != N)
//             return false;
//         for (int i = 0; i < N; i++)
//             if (postorder[i] != ans[i])
//                 return false;
//         return true;
//     }
// };

class Solution
{
public:
    int search(int in1[], int x, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (in1[i] == x)
            {
                return i;
            }
        }
        return -1;
    }

    vector<int> printPostOrder(int in1[], int pre[], int n)
    {
        vector<int> v, v1, v2;

        int root = search(in1, pre[0], n);

        if (root == -1)
        {
            return v;
        }

        if (root != 0)
        {
            v1 = printPostOrder(in1, pre + 1, root);
        }

        if (root != n - 1)
        {
            v2 = printPostOrder(in1 + root + 1, pre + 1 + root, n - root - 1);
        }

        v = v1;
        for (auto x : v2)
        {
            v.push_back(x);
        }
        v.push_back(pre[0]);
        return v;
    }

    bool checktree(int preorder[], int inorder[], int postorder[], int n)
    {
        if (n == 0)
        {
            return true;
        }
        if (n == 1)
        {
            if (preorder[0] == inorder[0] && preorder[0] == postorder[0])
            {
                return true;
            }

            return false;
        }

        vector<int> ans = printPostOrder(inorder, preorder, n);

        if (ans.size() != n)
        {
            return false;
        }

        for (int i = 0; i < n; i++)
        {
            if (postorder[i] != ans[i])
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

int main()
{
    int n;
    cin >> n;
    int preorder[n];
    int inorder[n];
    int postorder[n];

    for (int i = 0; i < n; ++i)
        cin >> preorder[i];

    for (int i = 0; i < n; ++i)
        cin >> inorder[i];

    for (int i = 0; i < n; ++i)
        cin >> postorder[i];

    Solution obj;
    if (obj.checktree(preorder, inorder, postorder, n))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}

// 5
// 1 2 4 5 3
// 4 2 5 1 3
// 4 5 2 3 1