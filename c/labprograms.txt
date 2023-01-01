// #include <stdio.h>//linear search
// void main(){
//     int XYZ[100], id, i, n, count=0;
//     printf("Enter the number of employees\t");
//     scanf("%d",&n);
//     printf("Enter %d employee id(s)\t", n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &XYZ[i]);
//     printf("Enter the id to search\t");
//     scanf("%d", &id);
//     for (i=0;i<n;i++){
//         if(XYZ[i]== id){
//             printf("employee with %d id is present at location %d.\n", id, i+1);
//             count=1;
//         }
//     }
//     if (count==0)
//         printf("employee with %d id is not present in array.\t", id);
// }

// #include<stdio.h>//binary search
// main(){
//     int XYZ[100], id,n,low,high,mid,i;
//     printf("Enter the number of employees\t");
//     scanf("%d",&n);
//     printf("Enter %d employee id(s)\t", n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &XYZ[i]);
//     printf("Enter the id to search\t");
//     scanf("%d", &id);
//     low = 0;
//     high = n - 1;
//     mid = (low+high)/2;
//     while (low <= high){
//         if (XYZ[mid] == id){
//             printf("employee with id %d is found at location %d.\n", id, mid+1);
//             break;
//         }
//         else if (id < XYZ[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//         mid = (low + high)/2;
//     }
//     if (low > high)
//         printf("employee with id %d is not present in the list.\n", id);
// }

// #include <stdio.h>//polynomial addition
// void main(){
//     int n,i;
//     printf("enter the highest degree of the polynomaial :");
//     scanf("%d",&n);
//     int pol1[n],pol2[n];
//     printf("enter the first polynomial\n");
//     for (i=0;i<n;i++){
//         printf("enter the coefficient of x^%d ",i);
//         scanf("%d",&pol1[i]);
//     }
//     printf("\nenter the second polynomial\n");
//     for (i=0;i<n;i++){
//         printf("enter the coefficient of x^%d ",i);
//         scanf("%d",&pol2[i]);
//     }
//     printf("\nthe first polynomial is :");
//     for (i=n-1;i>0;i--){
//         printf("%dx^%d + ",pol1[i],i);
//     }
//     printf("%dx^%d ",pol1[0],0);
//     printf("\nthe second polynomial is :");
//     for (i=n-1;i>0;i--){
//         printf("%dx^%d + ",pol2[i],i);
//     }
//     printf("%dx^%d",pol2[0],0);
//     printf("\ntheir sum polynomial is :");
//     for (i=n-1;i>0;i--){
//         printf("%dx^%d + ",pol1[i]+pol2[i],i);
//     }
//     printf("%dx^%d",pol1[0]+pol2[0],0);
// }

// #include <stdio.h>//addition subtraction of complex numbers
// void main(){
//     int n,i;
//     printf("how many complex numbers to be added :");
//     scanf("%d",&n);
//     struct complex{
//         int real;
//         int imag;
//     }num[n];
    
//     printf("enter %d complex numbers(real inaginary pairs):\n",n);
//     int rsum=0,csum=0,rsub=0,csub=0;
//     for (i=0;i<n;i++){
//         scanf("%d%d",&num[i].real,&num[i].imag);
//         printf("%d+%di\n",num[i].real,num[i].imag);
//         rsum+=num[i].real;
//         csum+=num[i].imag;
//         rsub-=num[i].real;
//         csub-=num[i].imag;
//     }
//     rsub+=(num[0].real)*2;
//     csub+=(num[0].imag)*2;
//     printf("\nthe sum of these complex numbers is %d+%di",rsum,csum);
//     printf("\nthe subtraction of these complex numbers is %d+%di",rsub,csub);
// }

// #include<stdio.h>    //string reverse with stack
// #include<string.h>
// #define MAX 100
// int top = -1;
// char stack[MAX];
// void push(char item){
//     stack[++top] =item;
// }
// char pop(){
//     return stack[top--];
// }
// void main(){
//     char str[100]="";
//     int i;
//     scanf("%s",&str);
//     for(i=0;i<strlen(str);i++)
//         push(str[i]);
//     for(i=0;i<strlen(str);i++)
//         str[i]=pop();
//     printf("\nReversed string is: ");
//     printf(str);
// }

// #define SIZE 50      //infix to postfix expression with stack
// #include<stdio.h>
// #include<string.h>
// #include <ctype.h>
// char s[SIZE];
// int top=-1;
// push(char elem){
//     s[++top]=elem;
// }
// char pop(){
//     return(s[top--]);
// }
// int pr(char elem){
//     switch(elem){
//         case '#': return 0;
//         case '(': return 1;
//         case '+':
//         case '-': return 2;
//         case '*':
//         case '/': return 3;
//         case '$':
//         case '^': return 4;
//     }
// }
// main(){
//     char infx[50],pofx[50],ch,elem;
//     int i=0,k=0;
//     printf("\n\nenter the Infix Expression : ");
//     scanf("%s",infx);
//     push('#');
//     while( (ch=infx[i++]) != '\0'){
//         if( ch == '(' ) /* For left parentheses */
//             push(ch);
//         else if(isalnum(ch)) /* For operand */
//             pofx[k++]=ch;
//         else if( ch == ')'){
//             while( s[top] != '(' )
//                 pofx[k++]=pop();
//                 elem=pop(); /* Remove ( */
//             }
//         else{
//             while( pr(s[top]) >= pr(ch) )
//             pofx[k++]=pop();
//             push(ch);
//         }
//     }
//     while( s[top] != '#') /* Pop from stack till empty */
//         pofx[k++]=pop();
//     pofx[k]='\0'; /* Make pofx as valid string */
//     printf("\n\nGiven Infix Expn: %s Postfix Expn: %s\n",infx,pofx);
// }

// #include <stdio.h>  //postfix evaluation using stack
// #define SIZE 50
// #include <ctype.h>
// int s[SIZE];
// int top= -1;
// void push(int elem){
//     s[++top]=elem;
// }
// int pop(){
//     return(s[top--]);
// }
// main(){
//     char pofx[50],ch;
//     int i=0,op1,op2;
//     printf("\n\nRead the Postfix Expression ? ");
//     scanf("%s",pofx);
//     while( (ch=pofx[i++]) != '\0'){
//         if(isdigit(ch))
//             push(ch-'0'); /* Push the operand */
//         else{ /*pop two operands */
//             op2=pop();
//             op1=pop();
//             switch(ch){
//                 case '+': push(op1+op2);break;
//                 case '-': push(op1-op2);break;
//                 case '*': push(op1*op2);break;
//                 case '/': push(op1/op2);break;
//             }
//         }
//     }
//     printf("\n Given Postfix Expn: %s\n",pofx);
//     printf("\n Result after Evaluation: %d\n",s[top]);
// }



// #include <stdio.h>  //simple queue
// int front = 0,rear = 0;
// int que[50];
// int enqueue(int el){
//     que[rear++]=el;
// }
// int dequeue(){
//     return front++;
// }
// void display(){
//     int i ;
//     for (i=front;i<rear;i++){
//         printf("%d",que[i]);
//     }
// }
// void main(){
//     int choice;
//     while (1){
//         printf("\n1.enque\n2.deque\n3.display\n4.exit\nyour choice:");
//         scanf("%d",&choice);
//         if (choice == 1){
//             printf("what to insert : ");
//             int t;
//             scanf("%d",&t);
//             enqueue(t);
//         }
//         else if (choice == 2)
//             dequeue();
//         else if (choice == 3)
//             display();
//         else
//             return;
//     }
// }

