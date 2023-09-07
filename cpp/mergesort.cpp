//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int p1 = l;
        int p2 = m+1;
        cout <<"pointers"<< p1 << p2 <<endl; 
        while(p1<=m && p2<r){

            if (arr[p1]>arr[p2]){
                swap(arr[p1],arr[p2]);
                p1++;
                if (arr[p2]>arr[p2+1]){
                    p2++;
                }
            }
            if (arr[p1]<arr[p2]){
                p1++;
            }
            if (arr[p1]==arr[p2]){
                p1++;
                p2++;
            }
            cout << "pointer1: " << p1 <<endl;
            cout << "pointer2: " << p2 <<endl;
            for (int i = l ; i<=r ; i++){
                cout << arr[i] << " "; 
            }
            cout << endl;
        }
    }
    
    void mergeSort(int arr[], int l, int r){
        //code here
        if (l>=r){
            return;
        }
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.merge(arr, 0,(n-1)/2,n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends