//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
        /* two pointers one at front and another at rear
        a loop running half the length of the input array
        and front and rear always synchronised with looping i value
            when a[rear]<a[front]{you increase a[rear] to be = a[front]}
            when a[rear]>a[front]{you decrease a[rear] to be = a[front]
                and increase a[rear]-1
                while the newly increased number >9
                    subtract 10 from it, and add 1 to its preceeding number
                    newly increased number is now the changed
                    repeat}*/
        for (int i=0;i<n/2+1;i++){
            int front = i,rear = n-i-1;
            if (num[rear]<num[front]){
                int difference = num[front]-num[rear];
                num[rear] = num[rear]+difference;
            }
            else if (num[rear]>num[front]){
                int difference = num[rear]-num[front];
                num[rear] = num[rear]-difference;
                num[rear-1] += 1;
                if (num[rear-1]>9){
                    int loc = rear-1;
                    while(num[loc]>9){
                        num[loc-1] += 1;
                        loc--;
                    }
                } 
            }
        }
        

	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends