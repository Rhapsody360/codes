//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	string FirstNonRepeating(string A){
		// Code here
		/*use a queue for input at rear and output the front stream 
		the elements of which has count associated to it, if count > 1,
		the element is popped out before it goes into the output */
		unordered_map<char,int> mp;
		queue <char> q;
		string ans = "";
		for (int i = 0; i < A.size(); i++)
		{
			mp[A[i]]++;
			if (mp[A[i]]==1) q.push(A[i]);
			while(!q.empty()&&mp[q.front()]!=1){
				q.pop();
			}
			if (q.empty()) ans += '#';
			else ans += q.front();
		}
		return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends