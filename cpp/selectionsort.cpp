#include <bits/stdc++.h>
using namespace std;
int main(){
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
    int minindex;
    for (i = 0; i < n - 1; i++){
        minindex = i;
        for (int j = i; j < n; j++){
            if (arr[minindex] > arr[j]){
                minindex = j;
            }
        }
        // int t = arr[minindex];
        // arr[minindex] = arr[i];
        // arr[i] = t;
        swap(arr[minindex],arr[i]);
    }

    // print output
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}