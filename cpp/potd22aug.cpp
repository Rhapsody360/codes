//{ Driver Code Starts
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    private:
    bool rowcolsame(int row[], int col[],int n){
        int ele = col[0];
        for (int i = 0 ;i<n;i++){
            if (row[i]!=col[i] || row[i]!=ele){
                return 0;
            }
            ele = row[i];
        }
        return 1;
    }
    int recalculatesmol(int v[],int n){
        int ans = INT_MAX;
        for (int i = 0 ;i<n ;i++){
            ans = min(ans,v[i]);
        }
        return ans;
    }
    
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        /**/
        int rowsum[n] = {0};
        int colsum[n] = {0};
        int rbig = INT_MIN,rsmol=INT_MAX;
        int cbig = INT_MIN,csmol=INT_MAX;
        for (int i = 0 ; i<n;i++){
            for (int j = 0 ;j<n;j++){
                rowsum[i] += matrix[i][j];
                rbig = max(rowsum[i],rbig);
                
            }
        }
        rsmol = recalculatesmol(rowsum,n);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                colsum[i] += matrix[j][i];
                cbig = max(rowsum[i],rbig);                
            }
        }
        csmol = recalculatesmol(colsum,n);
        //here onwards you have usable rowsum and colsum arrays along with 
        //big and smol which are the elements and not their locations
        int ans = 0;

        while(!rowcolsame(rowsum,colsum,n)){
            int minrow = 0,mincol = 0,ele = INT_MAX;
            for (int i = 0 ; i<n ;i++){
                if (rowsum[i]<ele){//find the index of smallest ele in rowsum and store it in minrow
                    minrow = i;
                    ele = rowsum[i];
                }
            }
            ele = INT_MAX;
            for (int i = 0; i < n; i++){
                if(colsum[i]<ele){//find the index of the smallest ele in the colsum and store it in the mincol
                    mincol = i;
                    ele = colsum[i];
                }
            }
            //debug print loop
            // cout << "rowSum colSum"<<endl;
            // for (int i =0 ;i<n;i++){
            //     cout << rowsum[i]<<"      "<<colsum[i]<<endl;
            // }
            rowsum[minrow] ++;
            colsum[mincol] ++;
            ans++;
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    _getch();
    return 0;
}
