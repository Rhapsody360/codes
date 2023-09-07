//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findMin(int A[], int n)
    {
        // add your code here
        int sum = 0;
        int smallest_even = INT_MAX;
        int sed = 9;
        for (int i = 0; i<n ; i++){
            sum+= A[i];
            if (A[i]%2==0 && A[i]%10<sed && A[i]%10!=0){
                smallest_even = A[i];
                sed = A[i]%10;
            }
        }
        cout << endl;
        if (sum%2 == 0){
            return 0;
        }
        else {
            if (smallest_even == INT_MAX){
                return -1;
            }
            int count = 1;
            while(sed>2){
                sed /= 2;
                count ++;
            }
            return count;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) cin >> A[i];
       

        Solution ob;
        cout << ob.findMin(A, N) << "\n";
        _getch();
    }
    return 0;
}

// } Driver Code Ends