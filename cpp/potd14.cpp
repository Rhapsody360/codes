//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int stockBuyAndSell(int N, vector<int> &price) {

        /*return the total profit as an integer*/
        int profit = 0;
        bool flag = 0;
        int buy=0,sell=0;
        for (int i = 0 ; i < N-1; i++){ //goes upto second last number to avoid comparing garbagevalue in i+1th element
            if (price[i]<price[i+1]){
                sell=i+1;
                flag = 1;
            }
            else {  //streak reset shouldnt be executed b4 if loop
                if (flag){
                    if (buy<sell)
                        //cout <<"("<<buy<<" "<<sell<<") ";
                        profit +=price[sell]-price[buy];
                    buy =i+1;
                }
                else {
                    buy = i+1;
                }
            }
        }
        if (buy!=N-1){
            //cout <<"(" << buy << " " <<N-1<<")"<<"\n";
            profit+=price[sell]-price[buy];
        }
        // if (flag==0)
        //     cout << "No Profit";
        return profit;

        
    }
};

// void stockBuySell(int price[], int N){
//     //Code here
//     bool flag = 0;
//     int buy=0,sell=0;
//     for (int i = 0 ; i < N-1; i++){ //goes upto second last number to avoid comparing garbagevalue
//         if (price[i]<price[i+1]){
//             sell=i+1;
//             flag = 1;
//         }
//         else {  //streak reset shouldnt be executed b4 if loop
//             if (flag){
//                 if (buy<sell)
//                     cout <<"("<<buy<<" "<<sell<<") ";
//                 buy =i+1;
//             }
//             else {
//                 buy = i+1;
//             }
//         }
//     }
// 	if (buy!=N-1){
// 		cout <<"(" << buy << " " <<N-1<<")"<<"\n";
// 	}
//     if (flag==0)
//         cout << "No Profit";
//     return;
// }


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends