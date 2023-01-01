#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    // cout << "enter the number testcases:";
    cin >> tc;
    while (tc--){
        int n,i;
        // cout << "enter length of inputs array";
        cin >> n;
        int arr[n];
        for (i=0;i<n;i++){
            cin >> arr[i];
        }
        int k;
        // cout << "enter the k value";
        cin >> k;
        int uncle=arr[k-1];

        sort(arr,arr+n);

        //linear search to find the uncle
        for (int i=0;i<n;i++){
            if (arr[i]==uncle){
                cout << i+1 << endl;
                break;
            }
        }
    }
}