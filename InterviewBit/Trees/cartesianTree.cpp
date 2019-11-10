/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//https://www.interviewbit.com/problems/inorder-traversal-of-cartesian-tree/
 
 TreeNode* newNode (int data)  
{  
    TreeNode* Node = new TreeNode(data); 
    Node->val = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return Node;  
}  
  
  
int max (vector<int> arr, int strt, int end)  
{  
    int i, max = arr[strt], maxind = strt;  
    for(i = strt + 1; i <= end; i++)  
    {  
        if(arr[i] > max)  
        {  
            max = arr[i];  
            maxind = i;  
        }  
    }  
    return maxind;  
}  
    
 
 TreeNode* buildTreeUtil (vector<int>inorder, int start, int end)  
{  
    if (start > end)  
        return NULL;  
  
    /* Find index of the maximum element from Binary Tree */
    int i = max (inorder, start, end);  
  
    /* Pick the maximum value and make it root */
    TreeNode *root = newNode(inorder[i]);  
  
    /* If this is the only element in inorder[start..end],  
    then return it */
    if (start == end)  
        return root;  
  
    /* Using index in Inorder traversal, construct left and  
    right subtress */
    root->left = buildTreeUtil (inorder, start, i - 1);  
    root->right = buildTreeUtil (inorder, i + 1, end);  
  
    return root;  
}  


TreeNode* Solution::buildTree(vector<int> &A) {
    
    TreeNode* root = buildTreeUtil(A, 0 , A.size()-1);
    
    return root;
    
    
}
