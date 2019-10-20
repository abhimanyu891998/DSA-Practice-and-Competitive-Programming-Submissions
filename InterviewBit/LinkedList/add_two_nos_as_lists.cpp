//https://www.interviewbit.com/problems/add-two-numbers-as-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 

ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
    ListNode* temp = new ListNode(0);
    ListNode* head = temp;
    ListNode* tempA = A;
    ListNode* tempB = B;
    int carry = 0;
    while(tempA!=NULL && tempB!=NULL)
    {
        int sum = tempA->val + tempB->val;
        
        if(carry>0)
        {
            sum+= carry;
            carry=0;
        }
        
        if(sum>9)
        {
            carry = sum/10;
            temp->val = sum%10;
      
 
        }
        
        else
        {
            carry = 0;   
            temp->val = sum;
                      
        }
            
            if(tempA->next == NULL && tempB->next==NULL)
            {
                temp->next = NULL;
            }
            
            else
           { temp->next = new ListNode(0);
            temp = temp->next;}
            tempA = tempA->next;
            tempB = tempB->next;
        
        
    
    }
    
        
    if(tempB==NULL)
    {   
        while(tempA!=NULL)
        {int sum = tempA->val + carry;
        carry = 0;
        
        if(sum>9)
        {
            carry = sum/10;
            temp->val = sum%10;
           
 
        }
        
        else
        {
            carry = 0;   
            temp->val = sum;
                      
        }
        
                   if(tempA->next == NULL)
            {
                temp->next = NULL;
            }
            
            else
           { temp->next = new ListNode(0);
            temp = temp->next;}
        
        tempA=tempA->next;
        }
        
    }
    
    else
    {
        while(tempB!=NULL)
        {int sum = tempB->val + carry;
        carry = 0;
        
        if(sum>9)
        {
            carry = sum/10;
            temp->val = sum%10;
      
 
        }
        
        else
        {
            carry = 0;   
            temp->val = sum;
                      
        }
        
            if(tempB->next == NULL )
            {   
                if(carry==0)
                {temp->next = NULL;}
                else
                {
                    temp->next = new ListNode(carry);
                    temp->next->next = NULL;
                }
            }
            
            else
           { temp->next = new ListNode(0);
            temp = temp->next;}
            tempB = tempB->next;
        }
        
    }
    
    
    
    
    return head;
}
