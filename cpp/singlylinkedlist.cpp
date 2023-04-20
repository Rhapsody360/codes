#include <bits/stdc++.h>
class node{
    public: 
        int data;
        node* next=NULL;
};
using namespace std;

int main() {
    node* head = NULL;
    // node* second = new node();
    // node* third = new node();

    // //head=new node();
    // //second = new node();
    // //third = new node();

    // head->data=1;
    // head->next=second; 

    // second->data=2;
    // second->next=third;

    // third->data =3;
    // third->next = NULL;

    // node* iterator = head;
    // while (iterator != NULL){            //printing entire linkedlist
    //     cout << iterator->data;
    //     iterator = iterator -> next;
    // }
    int choice=1;
    while(choice != 0){
        cout << "1.enter new nodes at beginning\n";
        cout << "2.enter new node at position\n";
        cout << "3.enter new nodes at the end\n";

        cout << "4.delete from front\n";
        cout << "5.delete node from position\n";
        cout << "6.delete at end\n";

        cout << "7.print list so far\n";
        
        cout << "0.exit\n";
        cout << "choice:";
        cin >> choice;
        if (choice == 1){
            if (head == NULL){
                head = new node();
                cout << "enter data:";
                int payload;
                cin >> payload;
                head -> data = payload;
                head -> next = NULL;
            }
            else{
                node* newnode = new node();
                cout << "enter data:";
                int payload;
                cin >> payload;
                newnode -> data = payload;
                newnode -> next = head;
                head=newnode;
            }
        }
        else if (choice == 2){
            cout << "enter index position to insert data:";
            int pos;
            cin >> pos;
            node* iterator = head;
            while(--pos){
                iterator = iterator -> next;
            }
            node* newnode = new node();
            int payload;
            cout << "enter data:";
            cin >> payload;
            newnode -> data = payload;
            node * temp = iterator -> next;
            iterator -> next = newnode;
            newnode -> next = temp;
        }
        else if (choice==3){
            cout <<"entering new node at end\n";
            int payload;
			cout <<"enter data:";
            cin >> payload;
            node * iterator = head;
            while(iterator -> next!= NULL){
                iterator = iterator -> next;
            }
            node * newnode = new node();
            iterator ->next = newnode;
            newnode -> data = payload;
            newnode -> next = NULL;
		}
		else if (choice == 4){
			cout << "deleting from front...\n";
			node * temp = head;
			head = head ->next;
			free(temp);
		}
        else if (choice == 5){
            cout << "enter index position to delete from:";
            int pos;
            cin >> pos;
            node * delprev=head;
            while (pos--){
                delprev = delprev -> next;
            }
            node * delnext = delprev;
            delnext = delnext->next;
            delnext = delnext->next;
            delprev -> next = delnext;
            delprev = delprev ->next;
            free(delprev);
        }
		else if (choice == 6){
			cout <<"deleting from end";
			node * traveler = head;
			node * travelprev = new node();
			while (traveler ->next != NULL){
				travelprev = traveler;
				traveler=traveler->next;				
			}
			travelprev -> next = NULL;
			free(traveler);
		}
        else if (choice == 7){
            node* iterator=head; 
            cout << "printing list so far\n";
            while (iterator ->next != NULL){
                cout << iterator->data<<" ";
                iterator=iterator->next;
            }
            cout << "\n";
        }
    }
    return 0;
}