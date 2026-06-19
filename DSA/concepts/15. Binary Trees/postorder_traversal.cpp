#include<iostream>
#include<vector>
using namespace std;

class Node{
    public :
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

static int index = -1;

Node *buildTree(vector<int> nodes) // O(n)
{
    index++; 

    if(nodes[index] == -1)
    {
        return NULL;
    }
    
    Node *currNode = new Node(nodes[index]); // creating node
    currNode->left = buildTree(nodes); // Call for left subtree
    currNode->right = buildTree(nodes);// Call for right subtree

    return currNode;
}

void postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node *root = buildTree(nodes);

    cout<<"Postorder Traversal : ";
    postorder(root);
    
    return 0;
}