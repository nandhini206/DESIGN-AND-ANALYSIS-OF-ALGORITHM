#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node*right;
};
node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inordertrav(node*root)
{
    if (root == NULL)
		return ;
    cout<<root->data<<" ";
    inordertrav(root->left);
    inordertrav(root->right);
}

void preordertrav(node*root)
{
    if (root == NULL)
		return ;
    cout<<root->data<<" ";
    preordertrav(root->left);
    preordertrav(root->right);
}

void postordertrav(node*root)
{
    if (root == NULL)
		return ;
    postordertrav(root->left);
    postordertrav(root->right);
    cout<<root->data<<" ";
}

int main()
{
  node* Root = newNode(5);
    Root->left = newNode(2);
    Root->right = newNode(9);
    Root->left->left = newNode(4);
    Root->left->right = newNode(7);
    Root->right->left=newNode(8);
    Root->right->right=newNode(5);
    Root->left->left->left=newNode(94);
    cout << "\nInorder traversal: \n";
    inordertrav(Root);
    cout << "\nPreorder traversal: \n";
    preordertrav(Root);
    cout << "\nPostorder traversal:\n";
    postordertrav(Root);
    return 0;
}
