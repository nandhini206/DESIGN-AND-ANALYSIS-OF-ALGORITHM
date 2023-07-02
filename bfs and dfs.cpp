#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class node
{
    public:
    node*left,*right;
    int data;
};
node*insertt(node*root,int data)
{
    node*nn=new node();
    nn->data=data;
    if(root==NULL)
        root=nn;
    else if(data<root->data)
        root->left=insertt(root->left,data);
    else
        root->right=insertt(root->right,data);
    return root;
}
void dfs(node*root)
{
    stack<node *> q;
   q.push(root);
   while (q.empty() == false)
    {
      node *node = q.top();
      cout << node->data << " ";
      q.pop();
      if (node->left != NULL)
         q.push(node->left);
      if (node->right != NULL)
         q.push(node->right);
   }
}
void bfs(node*root)
{
    queue<node *> q;
   q.push(root);
   while (q.empty() == false)
    {
      node *node = q.front();
      cout << node->data << " ";
      q.pop();
      if (node->left != NULL)
         q.push(node->left);
      if (node->right != NULL)
         q.push(node->right);
   }
}

int main()
{
    int n,x;
    node*root=NULL;
    cout<<"enter no.of elements : ";
    cin>>n;
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        root=insertt(root,x);
    }
    cout<<"\nDFS TRAVERSAL : ";dfs(root);
    cout<<"\nBFS TRAVERSAL : ";bfs(root);
}

