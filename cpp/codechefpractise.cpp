//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include <string>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int in(char si,string tbchecked){
        int booleans=0;
        for (int i = 0 ; i < tbchecked.length() ; i++){
            if (si==tbchecked[i]){
                booleans = 1;
                return booleans;
            }
            return booleans;
        }
    }
    int kahatak(string s1, string s2,int start){
        int ans=start;
        for (int i =0; i<s1.length();i++){
            if (s1[start+i]==s2[i]){
                ans++;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
    int minOperation(string s) {
        // code here
        int operations=0;
        string sofar;
        for (int i=0;i<s.length();i++){
            // if (sofar==s){
            //     return operations;
            // }
            if (in(s[i],sofar)){
                sofar[i] = s[i];
                operations++;
            }
            else {//count karo kaha tak same hai remaining string compared to sofar 
                    //and uske baad woh pura string append kardo and pura opeartion ko 1 consider karo 
                int samestr=kahatak(s,sofar,i);
                // append from s upto samestr into sofar
                for (int j=i;j<samestr;j++){
                    sofar[j]=s[j+samestr];
                }
                operations ++;
            }
        }
        return operations;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends