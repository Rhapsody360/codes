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
            cin >> arr[i];
        }
        /*contains array with zeroes in between the elements you need 
        to sieve zeroes, while maintaining relative order in the elements*/

        /*brute force approach*/
        // int numt,zt;
        // for (int i=0;i<n;i++){
        //     if (arr[i]==0){
        //         zt=i;
        //         for (int j=i;j<n;j++){
        //             if (arr[j] != 0){
        //                 numt = j;
        //                 swap(arr[zt],arr[numt]);              bad time complexity O(n^2)
        //                 break;
        //             }
        //         }
        //     }
        // }

        /*optimised approach: using 2 pointers*/


        int nums,zeros=-1;
        for (int i = 0; i < n; i++){
            if (arr[i] == 0){
                nums = i;
                break;
            }
        }

        //j nums, i zeros
        for (int zeros=nums+1;zeros<n;zeros++){
            if(arr[zeros]!=0){
                swap(arr[zeros],arr[nums]);
                nums++;
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