#include<iostream>
using namespace std;

int maxxlocation(int arr[], int idx){
    if (idx==sizeof(arr)/sizeof(int)){
        return idx;
    }
    int misa=maxxlocation(arr,idx+1);
    if (arr[idx] > arr[misa]){
        return idx;
    }
    else {
        return misa;
    }
}
int main (){
    int n;
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n;i++){
        cin >> arr[i];
    }
    //cout << sizeof(arr)/sizeof(int) << endl;
    int max=maxxlocation(arr,0);
    cout << "location of max:" << max << endl;
}