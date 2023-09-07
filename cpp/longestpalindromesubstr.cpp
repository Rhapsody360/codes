//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalin (string S) {
        int n = S.size(),bound = n-1;
        for (int i = 0;i<=n;i++){
            int count = n-i;
            for (int j=0;j<n;j++){
                if (count >=bound && count <n){
                    // cout << j << "->"<<count<<",";
                    int front = j, rear = count;
                    while(front<=rear){
                        if (S[front]!=S[rear]){
                            break;
                        }
                        else{
                            front++;
                            rear--;
                        }
                    }
                    if(front>rear){
                        string answer;
                        for (i = j;i<=count;i++){
                            answer = answer+S[i];
                        }
                        return answer;
                    } 
                }
                count++;
            }
            bound--;
            //cout << endl;
        }
        return S;
    }
};

//{ Driver Code Starts.


int main(){
    int t; cin >> t;
    while (t--){
        string S; cin >> S;
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends