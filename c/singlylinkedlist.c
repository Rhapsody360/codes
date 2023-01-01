#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};struct node *head;

void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
void main (){
    int choice =0;
    while(choice != 9){
        printf("\nChoose one option from the following list ...\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n 5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice){
            case 1:
            beginsert();
            break;
            case 2:
            lastinsert();
            break;
            case 3:
            randominsert();
            break;
            case 4:
            begin_delete();
            break;
            case 5:
            last_delete();
            break;
            case 6:
            random_delete();
            break;
            case 7:
            search();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}

void beginsert(){
    struct node *newnode;
    int item;
    newnode = (struct node *) malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter value\n");
        scanf("%d",&item);
        newnode->data = item;
        newnode->next = head;
        head = newnode;
        printf("\nNode inserted");
    }
}

void lastinsert(){
struct node *newnode,*temp;
int item;
newnode = (struct node*)malloc(sizeof(struct node));
if(newnode == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter value?\n");
scanf("%d",&item);
newnode->data = item;
if(head == NULL)
{
newnode -> next = NULL;
head = newnode;
printf("\nNode inserted");
}
else
{
temp = head;
while (temp -> next != NULL)

{
temp = temp -> next;
}
temp->next = newnode;
newnode->next = NULL;
printf("\nNode inserted");
}
}
}
void randominsert()
{
int i,loc,item;
struct node *newnode, *temp;
newnode = (struct node *) malloc (sizeof(struct node));
if(newnode == NULL)
{
printf("\nOVERFLOW");
}
else
{
printf("\nEnter element value");
scanf("%d",&item);
newnode->data = item;
printf("\nEnter the location after which you want to insert ");
scanf("\n%d",&loc);
temp=head;
for(i=0;i<loc;i++)
{
temp = temp->next;
if(temp == NULL)
{
printf("\ncan't insert\n");
return;
}
}
newnode ->next = temp ->next;

temp ->next = newnode;
printf("\nNode inserted");
}
}
void begin_delete()
{
struct node *temp;
if(head == NULL)
{
printf("\nList is empty\n");
}
else
{
temp= head;
head = temp->next;
free(temp);
printf("\nNode deleted from the begining ...\n");
}
}
void last_delete()
{
struct node *prev,*temp;
if(head == NULL)
{
printf("\nlist is empty");
}
else if(head -> next == NULL)
{
head = NULL;
free(head);
printf("\nOnly node of the list deleted ...\n");
}
else
{
temp = head;
while(temp->next != NULL)

{
prev = temp;
temp = temp ->next;
}
prev->next = NULL;
free(temp);
printf("\nDeleted Node from the last ...\n");
}
}
void random_delete()
{
struct node *prev,*temp;
int loc,i;
printf("\n Enter the location of the node after which you want to perform deletion \n");
scanf("%d",&loc);
temp= head;
for(i=0;i<loc;i++)
{
prev = temp;
temp = temp->next;
if(temp== NULL)
{
printf("\nCan't delete");
return;
}
}
prev ->next = temp ->next;
free(temp);
printf("\nDeleted node %d ",loc+1);
}
void search()
{
struct node *temp;
int item,i=0,flag;
temp = head;
if(temp == NULL)

{
printf("\nEmpty List\n");
}
else
{
printf("\nEnter item which you want to search?\n");
scanf("%d",&item);
while (temp!=NULL)
{
if(temp->data == item)
{
printf("item found at location %d ",i+1);
flag=0;
}
else
{
flag=1;
}
i++;
temp = temp -> next;
}
if(flag==1)
{
printf("Item not found\n");
}
}
}
void display()
{
struct node *temp;
temp = head;
if(temp == NULL)
{
printf("Nothing to print");
}
else
{

printf("\nprinting values ........ \n");
while (temp!=NULL)
{
printf("\n%d",temp->data);
temp= temp -> next;
}
}
}
