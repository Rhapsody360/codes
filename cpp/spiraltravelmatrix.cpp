#include <bits/stdc++.h>
using namespace std;

//the whole thing is wrong idk why

class Solution{
    public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){ //here r is the number of rows, not the size of a row dont confuse 
        // code here 
        vector <int> ans;
        int top = 0,bottom = r-1,right = c-1,left=0  ;
        while(top <= bottom && left<=right){
            for (int i= left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top;i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right --;
            if (top <= bottom)
            for (int i = right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            if (left<= right)
            for (int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
