#include <bits\stdc++.h>
#include <conio.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int start=0;
	/*to prevent segmentation fault we use size -1 */
	int end=matrix[0].size()*matrix.size()-1;
    //cout << "last ellement linear location:" <<end <<endl;
	int mid;
    int totcol = matrix[0].size();
	while(start<=end){ // to make all test cases pass and not stuck in an endless loop
		mid = (start+end)/2;
        int ans_row,ans_col;
        ans_row=mid/totcol;
        ans_col=mid%totcol;
		if (matrix[ans_row][ans_col]==target){
			//cout << "the key is found at "<<mid; 
			return 1;
		}
		else if (matrix[ans_row][ans_col]>target){
			end=mid-1;
		}
		else {
			start = mid +1;
		}
	}
	//cout << "the element was not found !";
    return 0;
    }
};

int main(){

    Solution * ob = new Solution();
    int tc;
    cin >> tc;
    while(tc--){
        int totrow,totcol;
        cin >> totrow >> totcol ;
        vector <vector<int>> vec(totrow, vector<int> (totcol,0));
        int ele;
        for (int i = 0 ;i< totrow;i++){
            for (int j = 0; j < totcol; j++)
            {
                cin >> ele;
                vec[i][j]=ele;
            }            
        }
        int target;
        cin >> target;
        bool answr = ob->searchMatrix(vec,target);
        if (answr){
            cout << "true" <<endl;
        }
        else{
            cout << "false" << endl;
        }
        _getch();
    }
    return 0 ;
}
