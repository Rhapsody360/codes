//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        set <string> ha;
        vector<vector<int>> ans;
        for(int i=0;i<row;i++){
            string s;
            for(int j =0;j<col;j++){
                s+='0'+M[i][j];
            }
            ha.insert(s);
        }
        
        for(int i=0;i<row;i++){
            string s;
            for(int j =0;j<col;j++){
                s+='0'+M[i][j];
            }
            if(ha.find(s) != ha.end()){
                ha.erase(s);
                vector <int> var;
                for(int k=0;k<col;k++){
                    var.push_back(M[i][k]);
                }
                ans.push_back(var);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends