
// C++ program to reverse alternate
// k nodes in a linked list
#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
class Node
{
    public:
    int data;
    Node* next;

    Node(int x) : data(x), next(NULL) {}
    Node() : data(0), next(NULL) {}
};
 
Node *kAltReverse(Node *head, int k) {
    if(head==NULL || k==1) {
        return head;
    }

    Node* dummy = new Node(0);
    
    Node *curr = dummy, *nex = dummy, *pre = dummy;

    dummy->next = head;

    int count = 0;

          
        while(curr->next!=NULL) {
            curr = curr->next;
            count++; 
        }

    while(count>=k) {
    curr = pre->next;
    nex = curr->next;
    for(int i=1 ; i<k ; i++) {
        curr->next = nex->next;
        nex->next = pre->next;
        pre->next = nex;
        nex = curr->next;
    }
    
    pre = curr;
    count-=k;
    for(int i=0 ; i<k ; i++) {
        if(pre!=NULL)
            pre  = pre->next;
            count--;
    }
   
}


    return dummy->next;
    
} 
 
/* UTILITY FUNCTIONS */
/* Function to push a node */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);    
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Function to print linked list */
void printList(Node *node)
{
    int count = 0;
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
        count++;
    }
}
 
/* Driver code*/
int main(void)
{
    /* Start with the empty list */
    Node* head = NULL;
    int i;
     
    // create a list 1->2->3->4->5...... ->20
    for(i = 20; i > 0; i--)
    push(&head, i);
 
    cout<<"Given linked list \n";
    printList(head);
    head = kAltReverse(head, 3);
 
    cout<<"\n Modified Linked list \n";
    printList(head);
    return(0);
}