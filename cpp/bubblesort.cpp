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
    for (int i=0;i<n-1;i++){/*from 0 to second last element cuz at the 
    end the last element is sorted*/
        bool swapped = false;
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                swapped = true;
            }            
        }
        if (!swapped) continue;
    }

    //output loop
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}