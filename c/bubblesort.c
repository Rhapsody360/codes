#include <stdio.h>
int main() {
    int n,i,j;
    //printf("enter the number of numbers:");
    scanf("%d",&n);
    int a[n];
    //printf("enter random numbers\n"); 
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        for (j=1;j<n+1;j++){
            if (a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    //printf("\noutput:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}