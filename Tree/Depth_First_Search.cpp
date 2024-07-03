// Binary Search Tree - DFS Inorder Traversal Implementation in C++
#include <iostream>

using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *newNode(int data)
{
    BSTNode *temp = new BSTNode();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

BSTNode *Insert(BSTNode *root, int data)
{
    if (root == NULL)
    {
        root = newNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

void DFS_Inorder(BSTNode *root)
{
    if (root != NULL)
    {
        DFS_Inorder(root->left); // Visit left subtree
        cout << root->data << " "; // Visit node itself
        DFS_Inorder(root->right); // Visit right subtree
    }
}

int main()
{
    BSTNode *rootPtr = NULL; // pointer to root node
    // Inserting nodes into the BST
    rootPtr = Insert(rootPtr, 15);
    rootPtr = Insert(rootPtr, 10);
    rootPtr = Insert(rootPtr, 5);
    rootPtr = Insert(rootPtr, 12);
    rootPtr = Insert(rootPtr, 20);
    rootPtr = Insert(rootPtr, 16);
    rootPtr = Insert(rootPtr, 22);
    
    cout << "Inorder DFS: ";
    DFS_Inorder(rootPtr); // Perform DFS Inorder Traversal
    cout << endl;

    return 0;
}
