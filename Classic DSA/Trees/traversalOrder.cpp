#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void printInorder(struct Node *root)
{
  if(root != NULL)
  {printInorder(root->left);
  cout<<root->data<<" ";
  printInorder(root->right);}
  else
  {
    return;
  }
}

void printPreorder(struct Node *root)
{
  if(root!=NULL)
  {
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
  }

  else
  {
    return;
  }
}

void printPostorder(struct Node *root)
{
  if(root!=NULL)
  {
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
  }

  else
  {
    return;
  }
}



int main()
{
    struct Node *root = new Node(1);
    root->left             = new Node(2);
    root->right         = new Node(3);
    root->left->left     = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;

}
