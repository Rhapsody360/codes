//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int missing = 1;
        sort(arr,arr+n);
        // for (int i = 0;i<n;i++){
        //     cout << arr[i]<<" ";
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i]<=0){
        //         continue;
        //     }
        //     else{
        //         if (arr[i]==missing){
        //             missing++;
        //         }
        //         else{
        //             return missing;
        //         }
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(arr[i]!=i+1)
        //     return i+1;
        // }
        // return n+1;
        for(int i=0;i<n;i++){
            int ele=arr[i];
            if(ele>=1&&ele<=n){
                if(arr[ele-1]!=ele){
                    swap(arr[ele-1],arr[i]);
                    i--;
                }
            }
            
        }
        for(int i=0;i<n;i++){
            if(i+1!=arr[i]) return i+1;
        }
        return n+1;
    } 
};


//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends