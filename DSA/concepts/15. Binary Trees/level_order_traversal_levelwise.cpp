#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// Class representing a node of the Binary Tree
class Node{
public:
    int data;      // Value stored in the node
    Node *left;    // Pointer to left child
    Node *right;   // Pointer to right child

    // Constructor to initialize node data
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Global index used to traverse the preorder array
static int index = -1;

/*
    Function: buildTree()

    Creates a Binary Tree from its preorder representation.
    -1 represents a NULL node.

    Example Input:
    {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1}

            1
           / \
          2   3
         / \   \
        4   5   6

    Time Complexity: O(n)
    Space Complexity: O(h)
*/
Node *buildTree(vector<int> nodes)
{
    // Move to next element in preorder traversal
    index++;

    // Base case: NULL node encountered
    if(nodes[index] == -1)
    {
        return NULL;
    }

    // Create current node
    Node *currNode = new Node(nodes[index]);

    // Recursively build left subtree
    currNode->left = buildTree(nodes);

    // Recursively build right subtree
    currNode->right = buildTree(nodes);

    // Return root of current subtree
    return currNode;
}

/*
    Function: levelOrder()

    Performs Level Order Traversal (Breadth First Search).

    Output:
    1
    2 3
    4 5 6

    Time Complexity: O(n)
    Space Complexity: O(n)
*/
void levelOrder(Node *root)
{
    // Tree is empty
    if(root == NULL)
    {
        return;
    }

    // Queue used for traversal
    queue<Node*> q;

    // Push root node
    q.push(root);

    // NULL marker indicates end of a level
    q.push(NULL);

    while(!q.empty())
    {
        // Get front node and remove it from queue
        Node *curr = q.front();
        q.pop();

        // End of current level reached
        if(curr == NULL)
        {
            cout << endl;

            // Traversal completed
            if(q.empty())
            {
                break;
            }

            // Mark end of next level
            q.push(NULL);
        }
        else
        {
            // Print current node
            cout << curr->data << " ";

            // Push left child if present
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }

            // Push right child if present
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }

    cout << endl;
}

int main()
{
    // Preorder representation of Binary Tree
    // -1 denotes NULL nodes
    vector<int> nodes = {
        1,
        2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };

    // Build the Binary Tree
    Node *root = buildTree(nodes);

    // Display tree using Level Order Traversal
    levelOrder(root);

    return 0;
}