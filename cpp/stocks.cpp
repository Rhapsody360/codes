//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


void stockBuySell(int price[], int N){
    //Code here
        int flag = 0;
    int buy=0,sell,maxdiff=price[0]-price[1];
    for (int i = 0 ; i < N-1; i++){ //goes upto second last number to avoid comparing garbagevalue
        if (price[i]<price[i+1]){
            sell=i+1;
            flag = 1;
        }
        else {  //streak reset shouldnt be executed b4 if loop
            if (flag){
                if (buy<sell)
                    cout <<"("<<buy<<" "<<sell<<") ";
                buy =i+1;
            }
            else {
                buy = i+1;
            }
        }
    }
    if (flag==0)
        cout << "No Profit";
    return;
}
