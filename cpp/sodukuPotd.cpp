//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends

class Solution
{
    public:
    // Function to check whether we can put num at grid[row][col] or not
    bool isSafe(int grid[N][N], int row, int col, int num)
    {
        // check if num is in row or not
        for(int i=0;  i<N ; i++)
        {
            if(grid[row][i]==num)
                return false;
        }
        // check if num is in the column or not
        for(int i=0;  i<N ; i++)
        {
            if(grid[i][col]==num)
                return false;
        }
        
        int sroot = (int)sqrt(N);   // for the calculation of the start and end of sub box 
        // here sroot is always 3 in this case!
        
        int rowstart = row - row%sroot;     // index of starting row of sub box
        int colstart = col - col%sroot;     // index of starting column of sub box
        
        for(int r = rowstart ; r < rowstart + sroot ; r++)
        {
            for(int c = colstart ; c < colstart + sroot ; c++)
            {
                if(grid[r][c]==num)
                    return false;
            }
        }
        
        // if it is safe to put num after checking everything, we return true;
        return true;
    }
    
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        int row = -1;
        int col = -1;
        bool emptyLeft = true;
        
        // this is how we are replacing the r,c from argument
        for(int i = 0 ; i< N ; i ++)
        {
            for(int j = 0 ; j < N ;j++)
            {
                if(grid[i][j]== 0)               // means it found an empty item or place
                {
                    row = i;
                    col = j;
                    emptyLeft = false;
                    break;
                }
            }
            
            // if we found some empty element in row, then break;
            if(emptyLeft == false)   // found
                break;
        }
        
        if(emptyLeft)
        {
            return true;        // means sudoku is solved!!!, there is no empty space or element left
        }
        
        // BACKTRACK - put the answer or element
        for(int number = 1 ; number<=N ; number++)     // since we taking 0 to show empty space
        {
            if(isSafe(grid,row,col,number))
            {
                grid[row][col] = number;
                
                if(SolveSudoku(grid))                  // if this gives true means we found our answer;            
                {
                    return true;
                }
                else
                {
                    // BACKTRACK
                    grid[row][col] = 0;         // means answer is wrong , so we make it empty by 0
                }
            }
        }
        return false;    // means sudoku cannot be solved!!!
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int row = 0 ; row<N ; row++)
        {
            for(int col =0 ; col<N ; col++)
            {
                cout<<grid[row][col]<<" ";
            }
            // cout<<endl;
        }
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends