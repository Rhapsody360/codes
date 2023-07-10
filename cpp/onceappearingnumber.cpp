//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int N){
	    //code
        stack <int> stk;
        stk.push(-1);
        for (int i = 0; i < N; i++)
        {
            if(stk.top()!=arr[i]){
                stk.push(arr[i]);
            }
            else{
                stk.pop();
            }
        }
        return stk.top();
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends