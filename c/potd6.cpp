//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here 
        int m = 100000007;
        int facts[r+1];
        memset(facts,0,sizeof(facts));
        facts[0]=1;
        for (int i = 1; i <= n; i++){
            for (int j = min(i,r); j > 0; j--)
            {
                /* code */
                facts[j]=(facts[j]+facts[j-1])%m;
            }
        }        
        return facts[r]%m;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends