//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        //keep dividing the number by 2 
        //if remainder is 1, count oit somewhere
        //the new value of the number is the quotient
        //repeat
        int ones=0;
        while(N>1){
            if (N%2==1){
                ones++;
            }
            N/=2;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends