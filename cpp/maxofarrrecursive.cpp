#include <bits/stdc++.h>
using namespace std;
int max(int arr[], int idx, int n){
    // write your code here
    if (idx >= n){
        return INT_MIN;
    }
    int mosa = max(arr,idx+1,n);
    if (arr[idx]>mosa){
        return arr[idx];
    }
    return mosa;    
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
    return 0;
}