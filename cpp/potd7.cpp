//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

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
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set <int> unifon;
        auto l1iterator = head1;
        while(l1iterator->next!=NULL){
            int d = l1iterator->data;
            unifon.insert(d);
            l1iterator = l1iterator->next;
        }
        unifon.insert(l1iterator->data);
        auto l2iterator = head2;
        while(l2iterator->next!=NULL){
            int d = l2iterator->data;
            unifon.insert(d);
            l2iterator=l2iterator->next;
        }
        unifon.insert(l2iterator->data);
        // for (auto i:unifon){
        //     cout << i <<"\n";
        // }
        int firstvalue = *unifon.begin();
        Node * ans =new Node(firstvalue);
        Node *tail = ans;
        for (auto i:unifon){
            if (i==*unifon.begin()){
                continue;
            }
            tail->next = new Node(i);
            tail = tail->next;
        }
        return ans;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);//creating new linked list
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends