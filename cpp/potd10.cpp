// Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
        int state = 0;
	    for (int i = 0;i<s.size();i++){
            if (s[i]=='0'){
                // cout << "input 0\n";
                if (state==0){
                    // cout << "state unchanged (0)\n";
                    continue;
                }
                else if(state == 1){
                    state = 2;
                    // cout << "state changed to 2\n";
                    continue;
                }
                else { //state = 2
                    state = 1;
                    // cout << "state changed to 1\n";
                    continue;
                }
            }
            else{ //s[i] = 1
                // cout << "input 1\n";
                if (state==0){
                    state = 1;
                    // cout << "state changed to 1\n";
                    continue;
                }
                else if(state == 1){
                    state = 0;
                    // cout << "state changed to 0\n";
                    continue;
                }
                else { //state = 2
                    // cout << "state unchanged (2)\n";
                    continue;
                }
            }
        }
        if (state == 0){
            return 1;
        }
        return 0;
	}
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends