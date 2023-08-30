//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root){
    cout << "output"<<endl;
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        /*remove and return the modified list
        agar right me bada hai
        to uss bada waale ko uthakar separate list me append karna hai*/
        struct Node* iterator = head;
        struct Node* second = iterator->next;
        while(second->next!=NULL){
            if (iterator->data < second->next->data){
                iterator ->next = second->next;
                iterator = head;
                second = head->next;
                continue;
            }
            iterator = iterator->next;
            second = second->next;
        }

        iterator = head;
        second = head -> next;
        
        if(second -> data > iterator -> data) {
            if(iterator == head) {
                head = second;
                iterator = head;
                second = head -> next;
            }
        }
        
        return head;
    }
    
};


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends