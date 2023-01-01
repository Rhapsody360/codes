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
        cin >> n;           //move zeroes
        int arr[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];      //contains array with zeroes in between of numbers you sieve zeroes,
        }                       // while maintaining relative order in the elements


        int numt,zt;
        for (int i=0;i<n;i++){
            if (arr[i]==0){
                zt=i;
                for (int j=i;j<n;j++){
                    if (arr[j] != 0){
                        numt = j;
                        swap(arr[zt],arr[numt]);
                        break;
                    }
                }
            }
        }
        
        
        //print array
        for (int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}