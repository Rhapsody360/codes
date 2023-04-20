#include <iostream>
using namespace std;
class node{
    public:
    node* prev = NULL;
    int data;
    node* next = NULL;
};
void display(node * n){
	while (n != NULL){
		cout << n -> data;
		n = n ->next;
	}
}

int main(){
    cout << "1.insert at beginning\n";
    cout << "2.insert at pos:\n";
    cout << "3.insert at end\n";

    cout << "4.delete infront\n";
    cout << "5.delete at pos\n";
    cout << "6.delete at end\n";

    cout << "7.print instructions\n";
    cout << "0.exit\n";

    int ch=1;
    node* head = NULL;
    node * tail= head;
    while(ch){
		cin >> ch;
        if (ch==0){
            break;
        }
        else if (ch==1){
			if (head == NULL){
				head = new node();				
			}
			int data;
			cout << "enter data:";
			cin >> data;
			node * newnode = new node();
			newnode->data=data;
			newnode -> next=head;
			head = newnode; 
			display(head);
        }
        else if (ch == 2){
            int data,pos;
            cout << "enter data:";
            cin >> data;
            cout << "enter index pos:";
            cin >> pos;
			node * iterator = head;
            while (pos--){
				iterator = iterator-> next;
			}
			node * previous=iterator;
			previous = iterator -> prev;
			node * newnode = new node();
			newnode -> data = data;
			previous ->next = newnode;
			newnode-> next = iterator;
			iterator -> prev = newnode;
			newnode -> prev = previous;
            display(head);
        }
        else if(ch==3){
            int data;
            cout << "enter data:";
            cin >> data;
			node * newnode = new node();
			newnode -> data= data;
			tail -> next = newnode;
			tail = newnode; 
            display(head);
        }
        else if (ch==4){
            if (head == NULL){
                cout << "not possible: no head";
            }
            else {
                node * deleter = head;
                node * temp = head;
                deleter = deleter->next;
                deleter -> prev = NULL;
                free(temp);
            }
        }
        else if (ch==5){
            int pos;
            cout << "enter position to delete from:";
            cin >> pos;
            node* deleter = head;
            while (pos--){
                deleter = deleter->next;
            }
            if (deleter -> next==NULL){
                node* temp = deleter;
                deleter = deleter->prev;
                deleter ->next = NULL;
                free(temp);
            }
            else if (deleter->prev == NULL){
                node * temp = deleter;
                deleter = deleter->next;
                deleter -> prev = NULL;
                free(temp);
            }
            else {
                node * dnextlink = deleter;
                node * temp = deleter;
                deleter = deleter ->prev;
                dnextlink = dnextlink ->next;
                deleter ->next = dnextlink;
                dnextlink ->next = deleter;
                free(temp);
            }
        }
        else if (ch==6){
            if (tail== NULL){
                cout << "not possible:no tail";
            }
            else {
                node * tailprev=tail;
                node * temp = tail;
                tailprev = tailprev->prev;
                tailprev -> next = NULL;
                free(temp);
            }
        }
        else if (ch==7){
            cout << "1.insert at beginning\n";
			cout << "2.insert at pos:\n";
			cout << "3.insert at end\n";

			cout << "4.delete infront\n";
			cout << "5.delete at pos\n";
			cout << "6.delete at end\n";

			cout << "7.print instructions\n";
			cout << "0.exit\n";
        }

    }




    return 0;
}