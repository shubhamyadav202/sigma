#include<iostream>
#include<vector>
using namespace std;

// Node class for Binary Tree
class Node{
public:
    int data;      // Stores node value
    Node *left;    // Pointer to left child
    Node *right;   // Pointer to right child

    // Constructor to initialize a node
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Global index used to traverse the vector
static int index = -1;

/*
    Function to build a Binary Tree from preorder traversal.

    Representation:
    - Each integer represents a node value.
    - -1 represents a NULL node.

    Example:
    {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1}

    Time Complexity: O(n)
    Space Complexity: O(h)  // h = height of tree (recursion stack)
*/
Node *buildTree(vector<int> nodes)
{
    // Move to next element in the vector
    index++;

    // If current value is -1, no node exists here
    if(nodes[index] == -1)
    {
        return NULL;
    }

    // Create a new node with current value
    Node *currNode = new Node(nodes[index]);

    // Recursively build the left subtree
    currNode->left = buildTree(nodes);

    // Recursively build the right subtree
    currNode->right = buildTree(nodes);

    // Return the root of the constructed subtree
    return currNode;
}

int main()
{
    // Preorder representation of binary tree
    // -1 indicates NULL
    vector<int> nodes = {1,2, 4, -1, -1, 5, -1, -1,3, -1, 6, -1, -1};

    // Build the binary tree
    Node *root = buildTree(nodes);

    // Print root node value
    cout << "root = " << root->data << endl;

    return 0;
}