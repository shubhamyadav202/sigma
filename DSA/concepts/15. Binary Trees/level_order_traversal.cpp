#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Node class representing each node of the Binary Tree
class Node{
public:
    int data;      // Stores the value of the node
    Node *left;    // Pointer to left child
    Node *right;   // Pointer to right child

    // Constructor to initialize a node
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Global index used while constructing the tree
static int index = -1;

/*
    Builds a Binary Tree from preorder traversal.

    Representation:
    - Node value represents an actual node.
    - -1 represents a NULL node.

    Example:
    {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1}

    Time Complexity: O(n)
    Space Complexity: O(h)
    where h = height of the tree
*/
Node *buildTree(vector<int> nodes)
{
    // Move to the next element in preorder sequence
    index++;

    // Return NULL if current element represents no node
    if(nodes[index] == -1)
    {
        return NULL;
    }

    // Create the current node
    Node *currNode = new Node(nodes[index]);

    // Recursively construct left subtree
    currNode->left = buildTree(nodes);

    // Recursively construct right subtree
    currNode->right = buildTree(nodes);

    // Return root of the constructed subtree
    return currNode;
}

/*
    Performs Level Order Traversal (Breadth First Search).

    Traversal Order:
    Level by level from left to right.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/
void levelOrder(Node *root)
{
    // If tree is empty, nothing to print
    if(root == NULL)
    {
        return;
    }

    // Queue used for BFS traversal
    queue<Node*> q;
    q.push(root);

    // Continue until all nodes are processed
    while(!q.empty())
    {
        // Get the front node from queue
        Node *curr = q.front();
        q.pop();

        // Print current node's value
        cout << curr->data << " ";

        // Add left child to queue if it exists
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }

        // Add right child to queue if it exists
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main()
{
    // Preorder representation of Binary Tree
    // -1 indicates NULL
    vector<int> nodes = {
        1,
        2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };

    // Construct the Binary Tree
    Node *root = buildTree(nodes);

    // Print nodes using Level Order Traversal
    levelOrder(root);

    return 0;
}