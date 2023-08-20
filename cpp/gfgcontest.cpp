//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <conio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimum_difference(int n, vector<string> &words) {
        // Code here.
        int m = words[1].size();
        int minchanges;
        int minchount =INT_MAX;
        string string1,string2;
        for (int i = 0;i<n-1;i++){
            for (int j = i+1 ;j<n; j++){
                string1 = words[i];
                string2 = words[j];
                int minchanges=0;
                /*now convert character by character into integer and add or subtract 
                to bring both strings closer and closer
                track the count of all changes (+1 for each character for its string)
                maintain minchcount and update it=minchanges when current minchanges < mincount                
                */
                for (int k = 0;k<m;k++){
                    char c1=string1[k];
                    char c2=string2[k];
                    if(c1==c2){
                        continue;
                    }
                    else if(c1>c2){
                        int difference = (int)c1-(int)c2;
                        minchanges += difference;
                    } 
                    else if(c2>c1){
                        int difference = (int)c2-(int)c1;
                        minchanges += difference;
                    }

                }
                if (minchanges<minchount){
                    minchount = minchanges;
                }
            }
        }
        return minchount;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        Solution obj;
        cout << obj.minimum_difference(n, words) << endl;
    }
    _getch();
    return 0;
}

// } Driver Code Ends