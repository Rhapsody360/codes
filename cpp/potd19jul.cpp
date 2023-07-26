//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        string B ;
        int n = A.size();
        for (int i = n-1; i>=0; i--){
            B = B +A[i];
        }
        //cout << A <<"\n"<<rev<<endl;
        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= n; ++j)
            {
                if (i == 0 || j == 0) dp[i][j] = 0;
                else
                {
                    if (A[i - 1] == B[j - 1])
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    else
                        dp[i][j] = max (dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][n];
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}

// } Driver Code Ends