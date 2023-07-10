//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int arr[], int n)
{
    // Your code goes here
    int present[n+1]={0};
    for (int i = 0;i<n-1;i++){
        present[arr[i]]++;
    }
    for(int i =1;i<=n;i++){
        //cout <<i+1<<"present"<< present[i]<<endl;
        if (present[i]==0){
            return i;
        }
    }
}