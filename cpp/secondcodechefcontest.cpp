#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--) {
        int n,max=-1,loc,flag=0;
        cin >> n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        for (int i=0;i<n;i++){
            if (arr[i]>max){
                max=arr[i];
                loc = i;
            }
        }
        if (max<0){
            cout << -1 << endl;
            break;
        }
        for (int i=0;i<n;i++){// check every element must be out of range of array
            flag = 0;
            if (arr[i]<=(max*-1)){
                cout << -1 <<endl;
                flag=1;
                break;
            }
        }
        if (!flag){
            cout << loc +1 << endl;
        }
    }
    return 0;
}