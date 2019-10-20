//https://www.interviewbit.com/problems/reverse-link-list-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 
 ListNode* reverse(ListNode* head, int n)
 {
     ListNode* curr = head; 
     ListNode* prev = curr;
     int j = 1;
     
     while(j<=(n+1))
     {
         prev=prev->next;
         j++;
     }
     
     ListNode* temp = NULL;
     int i=0;
     while(curr!=NULL && i<=n)
     {
         temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;
         i++;
     }
     
     
     
    head = prev;
    return head;
 }
 

ListNode* Solution::reverseBetween(ListNode* head, int m, int n) {
    
    
    int i = 1;
    ListNode* temp = head;
    ListNode* mBefore = NULL;
     
    
    while(i<m && temp!=NULL)
    {   
        if(i==m-1)
        {
            mBefore = temp;
        }
        
        temp = temp->next;
        i++;
    }
    
    
  
    
    ListNode* reverseList = reverse(temp, (n-m));
    
    
    
    if(mBefore!=NULL)
    {mBefore->next = reverseList;
        
        return head;
    }
    
    else
    {
        return reverseList;
    }
    
    
    
    
    
    
    return head;
    
    
}
