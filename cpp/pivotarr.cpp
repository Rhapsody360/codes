#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i =0;i<n;i++){
            cin >> arr[i];
        }
        int start =0,end = n-1;
        int mid;

        while (start<end){
            mid = (start+end)/2;
            if (arr[mid] <= arr[n-1]){
                end = mid;  
            }
            else {
                start = mid+1; 
            }
            
        }
        cout << "pivot of the array is :"<<arr[mid]<<endl;
    }
}
