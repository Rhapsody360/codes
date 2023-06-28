#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void insertionSort(int arr[], int n) {
        int i, key, j;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        arr[j + 1] = key;
    }
}

};

int main(){

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        Solution *ob = new Solution();
        ob->insertionSort(arr,n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }        
	}
    return 0;
}
