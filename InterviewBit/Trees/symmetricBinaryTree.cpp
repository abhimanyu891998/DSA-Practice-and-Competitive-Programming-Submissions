//https://www.interviewbit.com/problems/symmetric-binary-tree/

bool isSame(TreeNode*  A, TreeNode* B)
{
    if(A==NULL || B==NULL)
    {
        return A==B;
    }
    
    return isSame(A->left, B->right) && isSame(A->right, B->left) && A->val==B->val;
}

int Solution::isSymmetric(TreeNode* A) {
    
    return A==NULL || isSame(A->left,A->right);
}
