#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;

    // end of input

    // main logic begin
    // int n= sizeof(nums)/sizeof(int);
    int op[n];
    for (int i=k+1;i<n;i++){
        op[i-k-1]=nums[i];
    }
    for (int i = 0 ;i<=k;i++){
        op[i+k]=nums[i];
    }

    //output loop
    for (int i =0;i<n;i++){
        nums[i]=op[i];
        cout << op[i] << " ";
    }
    //main logic end
}