//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    long long factorial(int n){
        long long ans = 1;
        int m = 1000000007;
        for (int i=2;i<=n;i++){
            ans = ans * i %m;
        }
        return ans;
    }
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        int m = 1000000007;
        int r = factorial(n);
        int ans = (factorial(2*n)/(r*r))/n+1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends