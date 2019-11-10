/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 //https://www.interviewbit.com/problems/kth-smallest-element-in-tree/
 void util(TreeNode* A, vector<int>& sortedArr)
 {
     if(A==NULL)
     {
         return;
     }
     
     else
     {
         util(A->left, sortedArr);
         sortedArr.push_back(A->val);
         util(A->right, sortedArr);
         
     }
     
     
 }
 
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> sortedArr;
    
    util(A, sortedArr);
    
    return sortedArr[B-1];
    
}
