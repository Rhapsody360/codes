#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
        //input
    int n, i;
    cout << "enter the length of the array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    // main code starts here
    int max;
    for (i=0;i<n-1;i++){/*from 0 to second last
element cuz at the end the last element is sorted*/ 
        max=n-i;
        for (int j=0;j<n-i;j++){
            if (arr[j]>arr[max]){
                // int t=arr[max];
                // arr[max]=arr[j];
                // arr[j]=t;
                swap(arr[j],arr[max]);
            }
        }
    }

    //output loop
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}