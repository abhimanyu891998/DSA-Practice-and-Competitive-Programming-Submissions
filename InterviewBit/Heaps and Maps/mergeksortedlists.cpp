//https://www.interviewbit.com/problems/merge-k-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* node = new ListNode(0);
    node->next = NULL;
    ListNode* root = node;
    map<int,int> sortedArray;
    for(int i=0 ; i<A.size() ; i++)
    {
        ListNode* temp = A[i];
        while(temp!=NULL)
        {
            sortedArray[temp->val]++;
            temp = temp->next;
        }
        
    }
    
    int i=0;
    for(auto it : sortedArray)
    {
        if(it.second>1)
        {
            while(it.second--)
            {
               
               if(i==sortedArray.size()-1)
               {   
                   node->val = it.first;
                   if(it.second!=0)
                   {
                       node->next = new ListNode(0);
                       node = node->next;
                   }
                   
                   else
                   {
                       node->next = NULL;
                   }
               }
               
               
                else
                {
                    node->val = it.first;
                    node->next = new ListNode(0);
                    node = node->next;
                    
                }
            
                
            }
        }
        
        else{
        node->val = it.first;
        if(i<sortedArray.size()-1)
        {node->next = new ListNode(0);
        node = node->next;}
        else
        {
            node->next = NULL;
        }
        }
        
        i++;
    }
    

    
    return root;
    
}
