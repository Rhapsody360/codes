//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node* deleteNode(struct Node *head,int );

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}

/* Driver program to test above function*/
int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}

// } Driver Code Ends


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x){
    //Your code here
    Node * iterator = head;
    int i = 1;
    if (x==1){
        head = iterator->next;
        return head;
    }
    while(iterator-> next != NULL && i<x-1){
        i++;
        iterator = iterator->next;
    }
    /* abhi iterator ke next ke aage kuch hai check karna hai, 
    agar kuch nahi hai toh bas iterator ka next delete karke output
    agar kuch hai aage toh uske address ko iterator ka next banado
    */
    if (iterator->next->next == NULL){
        Node* temp = iterator->next; 
        iterator->next=NULL;
        free(temp);
    }
    else {
        Node * temp = iterator->next;
        iterator->next=iterator->next->next;
        free(temp);
    }
    return head;
}
