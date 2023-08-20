//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    /*approach:
    sort the array first, then take a window of size m using 2 pointers 
    move it forward at a steady pace and for each iiteration calculate 
    arr[rear pointer] - arr[front pointer] and update a global ans variable if 
    ans < the above calculated value
    */

	sort(a.begin(),a.end());
	long long ptr1 = 0,ptr2 = m-1;
	long long mindifference = INT_FAST32_MAX;
	long long e1 = a[ptr1];
	long long e2 = a[ptr2];
	while(ptr2<n){
		e1 = a[ptr1];
		e2 = a[ptr2];
		long long difference_here = e2 - e1;
		if (difference_here<mindifference)
			mindifference = difference_here;
		ptr1++;
		ptr2++;
	}
	return mindifference;
    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends