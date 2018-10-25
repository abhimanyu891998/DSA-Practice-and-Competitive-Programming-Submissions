//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
#include<bits/stdc++.h>
using namespace std;
/* Link list node */
struct node *reverse (struct node *head, int k);
struct node
{
    int data;
    struct node* next;
}*head;
/* UTILITY FUNCTIONS */
/* Function to push a node */
  void insert()
{
    int n,value;
    cin>>n;
    struct node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
printf("
");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,value,n;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     cin>>t;
     while(t--)
     {
     insert();
     cin>>k;
     head = reverse(head, k);
     printList(head);
     }
     return(0);
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{
  // Complete this method
  // Complete this method
  struct node *current  = head;
  struct node *prev = 0;
  struct node *next;
  int n = k;
  while(n-- && current!=0)
  {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

 if(next!=0)
 {
     head->next = reverse(next,k);

 }

 head = prev;



}
