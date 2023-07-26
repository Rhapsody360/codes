//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    vector <int> doIntersection(int a[], int n, int b[], int m)  {
        //code here
        vector <int> ans;
        int p1 =0,p2=0;
        while(p1<n || p2<m){
            if (a[p1]==b[p2]){
                ans.push_back(a[p1]);
                p1++;
                p2++;
            }
            if (a[p1]>b[p2]){
                p2++;
            }
            if (a[p1]<b[p2]){
                p1++;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];


	    Solution ob;
        vector <int> ans;
	    ans = ob.doIntersection(a, n, b, m);
        cout << "ans:\n";
        for (int i = 0 ; i< ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends