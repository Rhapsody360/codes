//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        int ans = 0;
        bool broke =0;
        for (int i = 0; i < n; i++){
            string cmp=arr[i];
            for (int kiter = 0;kiter<k;kiter++){
                if (cmp[kiter]!=str[kiter]){
                    broke = 1;
                    break;
                }
            }
            if (!broke){
                ans ++;
            } 
            broke = 0;           
        }
        return ans;        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends