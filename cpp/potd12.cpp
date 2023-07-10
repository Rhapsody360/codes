//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int lmin[n], rmax[n],i,j,maxdiff;

        lmin[0]=arr[0];
        for (int i = 1; i < n; i++) {
            lmin[i]=min(arr[1],lmin[i-1]);
        }

        for (int j = n - 2; j >= 0; --j) {
            rmax[j] = max(arr[j], rmax[j + 1]);
        }

        i = 0, j = 0, maxdiff = -1;
        while (j < n && i < n) {
            if (lmin[i] <= rmax[j]) {
                maxdiff = max(maxdiff, j - i);
                j = j + 1;
            } else
                i = i + 1;
        }
    
        return maxdiff;
        
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends