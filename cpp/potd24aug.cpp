//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    string multiplyStrings(string s1, string s2) {
        int a = stoi(s1);
        int b = stoi(s2);
        int answer = a*b;
        return to_string(answer);
    }
};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    // debug ascii table printer
    // for (int i = 0 ;i<t;i++){
    //     cout << "char of "<<i<<":"<<char(i+48)<<endl;
    // }
    while(t--){
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
}
// } Driver Code Ends