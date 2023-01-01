#include <bits/stdc++.h>
using namespace std;

bool ispossiblesolution(int mid, vector <int> &boards, int n, int k){
    int isum=0;
    int kcount=1;
    int i;
    for (i=0;i<n;i++){
        if (isum+boards[i]<=mid){
            isum += boards[i];
        }
        else {
            kcount++;
            if (kcount>k || boards[i] > mid){
                return false;//when answer is not found
            }
            isum = boards[i];
        }
    }
    return true; // only when answer is found    
}


int findLargestMinDistance(vector<int> &boards, int k){
    //    upload only this function
    

    // sum loop to get the end value
    int end=0;
    int n=boards.size();
    cout << "n value :" << n << endl;
    int answer;
    for (int i = 0;i<n;i++){
        int end;
        end += boards[i];
    }
    int start=0;
    int mid;
    bool flag=0;
    while (start<=end){
        mid = start +(end-start)/2;
        if (ispossiblesolution(mid,boards,n,k)){        //its a possible solution, move left 
            answer=mid;
            end=mid-1;
            flag = 1;//answer has been found once
        }
        else {   //its not a possible solution, move right
            start=mid+1;
        }
    
    }
    cout << answer;
    return answer;
}


int main() //use this function to deal with inputs and outputs
{
    ios_base::sync_with_stdio(false);
    
    int tc;
    cout << "how many testcases ? :";
    cin >> tc;
    while (tc--){
        int start=0;
        int n;
        cout << "how long should the array length be?:";
        cin >> n;
        int k;
        cout << "how many painers:";
        cin >> k;
        vector<int> vec;
        cout << "now enter the sorted vector array:";
        for (int i=0;i<n;i++){
            int t;
            cin >> t;
            vec.push_back(t);
        }
        printf("%d \n",findLargestMinDistance(vec, k));
    }
}