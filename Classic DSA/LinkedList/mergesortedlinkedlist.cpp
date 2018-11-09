{
// C program to find n'th Node in linked list
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
struct Node* SortedMerge(struct Node* a, struct Node* b);
void MoveNode(struct Node** destRef, struct Node** sourceRef);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = SortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node  
struct Node {
    int data;
    Node* next;
}; */
Node* SortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    Node *new_head = NULL;
    Node *sorting = NULL;
    
    if(head1==NULL){
        
        return head2;
    }
    else if(head2==NULL){
        return head1;
    }
    else{
        if(head1 && head2)
        {
           if(head1->data < head2->data){
               sorting = head1;
               head1 = head1->next;
           }
           
           else
           {
               sorting = head2;
               head2 = head2->next;
           }
        }
        
        new_head = sorting;
        
        while(head1&&head2){
            
            if(head1->data < head2->data)
            {
                sorting->next = head1;
                sorting = head1;
                head1 = head1->next;
            }
            else
            {
                sorting->next = head2;
                sorting = head2;
                head2 = head2->next;
            }
        }
        
        if(head1==NULL)
        {
            sorting->next = head2;
            sorting=head2;
        }
        else
        {
            sorting->next = head1;
            sorting = head1;
        }
        
        
    }
    
    return new_head;
    
    
}