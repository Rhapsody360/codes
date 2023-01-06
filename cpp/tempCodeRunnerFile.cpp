#include <iostream>
using namespace std;
int MAX;

int max(int arr[], int idx, int n){
    // write your code here
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
