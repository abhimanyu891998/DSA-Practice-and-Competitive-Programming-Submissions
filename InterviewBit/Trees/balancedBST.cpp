/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//https://www.interviewbit.com/problems/balanced-binary-tree/
int bal(TreeNode* a,bool &flag)
{
if(!a)return 0;
int l=bal(a->left,flag);
int r=bal(a->right,flag);
if(abs(l-r)>1)flag=false;
return max(l,r)+1;
}
int Solution::isBalanced(TreeNode* A) {
bool flag=true;
bal(A,flag);
return flag;
}
