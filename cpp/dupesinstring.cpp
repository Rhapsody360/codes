//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string nums)
{
    //code here.
        int n = nums.size();
        int i = 0;
        while (true){
            if (nums[i] < 0){
                return (nums[i]*-1);
            }
            nums[i++] *= -1;
        }
}