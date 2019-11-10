/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//https://www.interviewbit.com/problems/invert-the-binary-tree/

TreeNode* invertUtil(TreeNode* A)
{
    if(A==NULL)
    {
        return NULL;
    }
    
    else
    {
        TreeNode* temp = invertUtil(A->left);
        A->left = invertUtil(A->right);
        A->right = temp;
        return A;
    }
    
    
}
 
TreeNode* Solution::invertTree(TreeNode* A) {
    
    TreeNode* result = invertUtil(A);
    
    return result;
    
}
